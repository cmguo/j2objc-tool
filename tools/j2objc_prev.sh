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
LIBRARIES="${WORKSPACE}/Libraries"

for i in $JAVA_SOURCES
do
  JAVA_DIRS="$JAVA_DIRS ${SRCROOT}/$i"
done

# Check if javas are changed

mkdir -p ${DERIVED_FILE_DIR}
find $JAVA_DIRS -name "*.java" > ${DERIVED_FILE_DIR}/JavaList
if [ ! -f ${DERIVED_FILE_DIR}/JavaList.d ]
then
  touch ${DERIVED_FILE_DIR}/JavaList.d
fi
if ${TOOLS}/check_diff.awk ${DERIVED_FILE_DIR}/JavaList ${DERIVED_FILE_DIR}/JavaList.d > ${DERIVED_FILE_DIR}/JavaList.d1
then
  exit 0
fi


# Analyze depends 

if [ "$J2OBJC_DEPENDS" == "ThirdParty" ]
then
  # Headers from StaticLibraries
  find ${THIRDPARTY}/objc -name "*.h" | awk "{ sub(\"${THIRDPARTY}/objc/\", \"\", \$0); print \$0 }" > ${DERIVED_FILE_DIR}/J2ObjcHeader1
  STATIC_CLASSES="-C ${THIRDPARTY}/classes ."
  JARS="-cp ${THIRDPARTY}/classes"
  if [ -f ${THIRDPARTY}/sources/prefixes.txt ]
  then
    PREFIXES="${THIRDPARTY}/sources/prefixes.txt"
  fi
else
  for d in ${J2OBJC_DEPENDS}
  do
    JARS="$JARS -cp ${BUILT_PRODUCTS_DIR}/$d.framework/classes.jar"
    FRMS="$FRMS ${BUILT_PRODUCTS_DIR}/$d.framework"
    if [ -f ${BUILT_PRODUCTS_DIR}/$d.framework/prefixes.txt ]
    then
      PREFIXES="$PREFIXES ${BUILT_PRODUCTS_DIR}/$d.framework/prefixes.txt"
    fi
  done
fi

if [ -f ${SRCROOT}/prefixes.txt ]
then
  PREFIXES="$PREFIXES ${SRCROOT}/prefixes.txt"
fi

cat $PREFIXES > ${DERIVED_FILE_DIR}/prefixes.txt
PREFIXES="--prefixes ${DERIVED_FILE_DIR}/prefixes.txt"


# Compile java with j2objc

rm -rf ${DERIVED_FILE_DIR}/classes
rm -rf ${DERIVED_FILE_DIR}/objc
mkdir -p ${DERIVED_FILE_DIR}/classes

"${TOOLS}/j2objc.sh" -arc $J2OBJC_FLAGS \
  -d ${DERIVED_FILE_DIR} -cp json.jar -cp jre_emul.jar -cp annotations-13.0.jar $JARS \
  $PREFIXES -g @${DERIVED_FILE_DIR}/JavaList

if [ -f ${SRCROOT}/reflect.txt ]
then
  awk "{ print \"${SRCROOT}/\" \$0 }" ${SRCROOT}/reflect.txt > ${DERIVED_FILE_DIR}/JavaList.reflect
  JARS="$JARS -cp ${DERIVED_FILE_DIR}/classes"
  "${TOOLS}/j2objc.sh" -arc -reflect $J2OBJC_FLAGS \
    -d ${DERIVED_FILE_DIR} -cp json.jar -cp jre_emul.jar -cp annotations-13.0.jar $JARS \
    $PREFIXES -g @${DERIVED_FILE_DIR}/JavaList.reflect
fi

# Fix modular include

FRMS="$FRMS ${LIBRARIES}/JRE.framework"
${TOOLS}/fix_include.sh ${DERIVED_FILE_DIR}/objc $FRMS


# Headers from Project java

find ${DERIVED_FILE_DIR}/objc -name "*.h" | awk "{ sub(\"${DERIVED_FILE_DIR}/objc/\", \"\", \$0); print \$0 }" > ${DERIVED_FILE_DIR}/J2ObjcHeader2


# collect includes

awk '{ print "#include \"" $0 "\"" }' ${DERIVED_FILE_DIR}/J2ObjcHeader? > ${DERIVED_FILE_DIR}/${TARGET_NAME}-J2objc.h


# make dependancy files

mkdir -p ${DERIVED_FILE_DIR}/J2objc.d
awk "{ name = \$0; sub(\".*/\", \"\", name); sub(\".java\", \"\", name); path = \"${DERIVED_FILE_DIR}/J2objc.d/\" name \".d\"; print \"${DERIVED_FILE_DIR}/J2objc/\" name \".m: \" \$0 > path }" ${DERIVED_FILE_DIR}/JavaList

# Java classes & jar

rm -f ${DERIVED_FILE_DIR}/classes.jar
if [[ $(java --version) =~ 11\. ]]
then
  jar cf ${DERIVED_FILE_DIR}/classes.jar -C ${DERIVED_FILE_DIR}/classes . ${STATIC_CLASSES}
else
  if ![ -z ${STATIC_CLASSES} ]
  then
    cp -rf ${THIRDPARTY}/classes ${DERIVED_FILE_DIR}
  fi
  jar cf ${DERIVED_FILE_DIR}/classes.jar -C ${DERIVED_FILE_DIR}/classes .
fi


# Install headers to framework

if [ -f ${DERIVED_FILE_DIR}/J2ObjcHeader1 ]
then
  tar -c - -C ${THIRDPARTY}/objc -T ${DERIVED_FILE_DIR}/J2ObjcHeader1 | tar -x -C ${METAL_LIBRARY_OUTPUT_DIR}/Headers
fi
tar -c - -C ${DERIVED_FILE_DIR}/objc -T ${DERIVED_FILE_DIR}/J2ObjcHeader2 | tar -x -C ${METAL_LIBRARY_OUTPUT_DIR}/Headers
if [ -f ${DERIVED_FILE_DIR}/${TARGET_NAME}-J2objc.h ]
then
  cp ${DERIVED_FILE_DIR}/${TARGET_NAME}-J2objc.h ${METAL_LIBRARY_OUTPUT_DIR}/Headers/${TARGET_NAME}-J2objc.h
fi


# Update java state file

mv ${DERIVED_FILE_DIR}/JavaList.d1 ${DERIVED_FILE_DIR}/JavaList.d
