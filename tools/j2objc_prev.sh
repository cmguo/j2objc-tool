#!/bin/sh

TOOLS=$(dirname $0)

if [ ! -f "${J2OBJC_HOME}/j2objc" ]; then 
  echo "J2OBJC_HOME is not correctly defined, currently set to '${J2OBJC_HOME}'"
  exit 1
fi

set -x
set -e

WORKSPACE=$(dirname ${PROJECT_DIR})
THIRDPARTY="${WORKSPACE}/ThirdParty"

PUBLIC_HEADERS_FOLDER=${BUILT_PRODUCTS_DIR}/${PUBLIC_HEADERS_FOLDER_PATH}

for i in ${PROTO_SOURCES-proto}
do
  if [[ ! $i =~ ^/ ]]
  then
    i=${SRCROOT}/$i
  fi
  if [ -d $i ]
  then
    PROTO_DIRS="$PROTO_DIRS $i"
  fi
done

for i in ${JAVA_SOURCES-src/main/java $TARGET_NAME/java}
do
  if [[ ! $i =~ ^/ ]]
  then
    i=${SRCROOT}/$i
  fi
  if [ -d $i ]
  then
    JAVA_DIRS="$JAVA_DIRS $i"
  fi
done

# Check if javas are changed

mkdir -p ${DERIVED_FILE_DIR}
mkdir -p ${PUBLIC_HEADERS_FOLDER}
if [ ! -z $PROTO_DIRS ]
then
find $PROTO_DIRS -name "*.proto" > ${DERIVED_FILE_DIR}/ProtoList
else
touch ${DERIVED_FILE_DIR}/ProtoList
fi
find $JAVA_DIRS -name "*.java" > ${DERIVED_FILE_DIR}/JavaList
find ${SRCROOT} -name "*.txt" -depth 1 > ${DERIVED_FILE_DIR}/TxtList
if [ ! -f ${DERIVED_FILE_DIR}/SourceList.d ]
then
  touch ${DERIVED_FILE_DIR}/SourceList.d
fi
if ${TOOLS}/check_diff.awk ${DERIVED_FILE_DIR}/SourceList.d ${DERIVED_FILE_DIR}/ProtoList ${DERIVED_FILE_DIR}/JavaList ${DERIVED_FILE_DIR}/TxtList > ${DERIVED_FILE_DIR}/SourceList.d1
then
  # Install headers to framework
  if [ ! -f ${PUBLIC_HEADERS_FOLDER}/${TARGET_NAME}-J2objc.h ]
  then
    source ${TOOLS}/j2objc_headers.sh
  fi
  exit 0
fi


# Analyze depends 

set +x

if [ -z $J2OBJC_DEPENDS ]
then
  LAST_LDFLAG=-
  for i in ${OTHER_LDFLAGS}
  do
    if [ $LAST_LDFLAG == -framework ]
    then
      J2OBJC_DEPENDS="$J2OBJC_DEPENDS ${i//\"/}"
    fi
    LAST_LDFLAG=$i
  done
  if [ -d ${THIRDPARTY} ]
  then
    J2OBJC_DEPENDS="$J2OBJC_DEPENDS ThirdParty"
  fi
else
  J2OBJC_DEPENDS="$J2OBJC_DEPENDS JRE"
fi

J2OBJC_DEPENDS=`echo ${J2OBJC_DEPENDS} | tr " " "\n" | sort -u`
echo J2OBJC_DEPENDS=$J2OBJC_DEPENDS

for d in ${J2OBJC_DEPENDS}
do
  if [ "$d" == "ThirdParty" ]
  then
    # Headers from StaticLibraries
    find ${THIRDPARTY}/objc -name "*.h" | awk "{ sub(\"${THIRDPARTY}/objc/\", \"\", \$0); print \$0 }" > ${DERIVED_FILE_DIR}/J2ObjcHeader1
    STATIC_CLASSES="-C ${THIRDPARTY}/classes ."
    JARS="$JARS -cp ${THIRDPARTY}/classes"
    if [ -f ${THIRDPARTY}/sources/prefixes.txt ]
    then
      PREFIXES="$PREFIXES ${THIRDPARTY}/sources/prefixes.txt"
    fi
    FRMS="$FRMS ${TARGET_NAME}=${DERIVED_FILE_DIR}/J2ObjcHeader1"
  else
    for p in $FRAMEWORK_SEARCH_PATHS
    do
      p=${p#\"}
      p=${p%\"}
      if [ -d $p/$d.framework ]
      then
        echo Framework: $p/$d.framework
        if [ -f $p/$d.framework/classes.jar ]
        then
          JARS="$JARS -cp $p/$d.framework/classes.jar"
          FRMS="$FRMS $p/$d.framework"
        fi
        if [ "$d" == "JRE" ] # JRE has not classes.jar
        then
          FRMS="$FRMS $p/$d.framework"
        fi
        if [ -f $p/$d.framework/prefixes.txt ]
        then
          PREFIXES="$PREFIXES $p/$d.framework/prefixes.txt"
        fi
      fi
    done
  fi
done

echo FRMS=$FRMS
echo JARS=$JARS
echo PREFIXES=$PREFIXES

set -x

JARS="$JARS -cp ${DERIVED_FILE_DIR}/classes"

if [ -f ${SRCROOT}/prefixes.txt ]
then
  PREFIXES="$PREFIXES ${SRCROOT}/prefixes.txt"
fi

cat $PREFIXES | sort -u > ${DERIVED_FILE_DIR}/prefixes.txt
PREFIXES="--prefixes ${DERIVED_FILE_DIR}/prefixes.txt"


# Compile proto with protoc

if [ ! -z $PROTO_DIRS ]
then
  rm -rf ${DERIVED_FILE_DIR}/Protobuf/java
  mkdir -p ${DERIVED_FILE_DIR}/Protobuf/java
  ${TOOLS}/protobuf.sh compile ${PROTO_DIRS// /:} ${DERIVED_FILE_DIR}/Protobuf/java `< ${DERIVED_FILE_DIR}/ProtoList`
fi

# Compile java with j2objc

rm -rf ${DERIVED_FILE_DIR}/classes
rm -rf ${DERIVED_FILE_DIR}/objc
rm -f ${PUBLIC_HEADERS_FOLDER}/${TARGET_NAME}-J2objc.h
mkdir -p ${DERIVED_FILE_DIR}/classes

if [ ! -z $PROTO_DIRS ]
then
  find ${DERIVED_FILE_DIR}/Protobuf/java -name "*.java" > ${DERIVED_FILE_DIR}/JavaList.protobuf
  "${TOOLS}/j2objc.sh" -arc $J2OBJC_FLAGS \
    -d ${DERIVED_FILE_DIR} -cp json.jar -cp jre_emul.jar -cp annotations-13.0.jar $JARS \
    $PREFIXES -g @${DERIVED_FILE_DIR}/JavaList.protobuf
fi

"${TOOLS}/j2objc.sh" -arc $J2OBJC_FLAGS \
  -d ${DERIVED_FILE_DIR} -cp json.jar -cp jre_emul.jar -cp annotations-13.0.jar $JARS \
  $PREFIXES -g @${DERIVED_FILE_DIR}/JavaList

if [ -f ${SRCROOT}/reflect.txt ]
then
  awk "{ print \"${SRCROOT}/\" \$0 }" ${SRCROOT}/reflect.txt > ${DERIVED_FILE_DIR}/JavaList.reflect
  "${TOOLS}/j2objc.sh" -arc -reflect $J2OBJC_FLAGS \
    -d ${DERIVED_FILE_DIR} -cp json.jar -cp jre_emul.jar -cp annotations-13.0.jar $JARS \
    $PREFIXES -g @${DERIVED_FILE_DIR}/JavaList.reflect
fi

# Fix modular include

${TOOLS}/fix_include.sh -s ${TARGET_NAME} ${DERIVED_FILE_DIR}/objc $FRMS


# Headers from Project java

find ${DERIVED_FILE_DIR}/objc -name "*.h" | awk "{ sub(\"${DERIVED_FILE_DIR}/objc/\", \"\", \$0); print \$0 }" > ${DERIVED_FILE_DIR}/J2ObjcHeader2


# collect includes

awk "{ print \"#include <${TARGET_NAME}/\" \$0 \">\" }" ${DERIVED_FILE_DIR}/J2ObjcHeader? > ${DERIVED_FILE_DIR}/${TARGET_NAME}-J2objc.h


# make dependancy files

# mkdir -p ${DERIVED_FILE_DIR}/J2objc.d
# awk "{ name = \$0; sub(\".*/\", \"\", name); sub(\".java\", \"\", name); path = \"${DERIVED_FILE_DIR}/J2objc.d/\" name \".d\"; print \"${DERIVED_FILE_DIR}/J2objc/\" name \".m: \" \$0 > path }" ${DERIVED_FILE_DIR}/JavaList

# Java classes & jar

rm -f ${DERIVED_FILE_DIR}/classes.jar
if [[ $(java --version) =~ 11\. ]]
then
  jar cf ${DERIVED_FILE_DIR}/classes.jar -C ${DERIVED_FILE_DIR}/classes . ${STATIC_CLASSES}
else
  if [ ! -z "${STATIC_CLASSES}" ]
  then
    cp -rf ${THIRDPARTY}/classes ${DERIVED_FILE_DIR}
  fi
  jar cf ${DERIVED_FILE_DIR}/classes.jar -C ${DERIVED_FILE_DIR}/classes .
fi


# Install headers to framework

source ${TOOLS}/j2objc_headers.sh


# Update java state file

mv ${DERIVED_FILE_DIR}/SourceList.d1 ${DERIVED_FILE_DIR}/SourceList.d
