#!/bin/bash

set -e

# default settings

UPDATE_THIRDPARTY=
CLEAN=
CONFIGURATION=Debug
SDK=

while [[ $1 =~ ^-.+ ]]
do
  case $1 in
    -r)
      CONFIGURATION=Release
      ;;
    -u)
      UPDATE_THIRDPARTY=true
      ;;
    -c)
      CLEAN=clean
      ;;
    -sim)
      SDK=iphonesimulator
      ;;
    -os)
      SDK=iphoneos
      ;;
    *)
      if [ $1 != -h ]
      then
        echo $0: unknown option $1 !!
      fi
      echo Usage $0 [flags...] [Scheme]
      echo " -r:" Build with Release configuration, default Debug
      echo " -u:" Update ThirdPartyiOS before build
      echo " -sim:" Build iphonesimulator only
      echo " -os:" Build iphoneos only
      exit 0
  esac
  shift
done

set -x

if [ ! -z $UPDATE_THIRDPARTY ]
then
  ${J2OBJC_HOME}/tools/thirdparty.sh update
fi

if [ ! -z $1 ]
then
  SCHEME=$1
fi

if [ -z "$SCHEMES"]
then
  eval "SCHEMES=\${DEPENDS_${SCHEME}}"
  SCHEMES="$SCHEME $SCHEMES"
fi

VERSION=`git log -1 --format=%h`
VERSION=$((16#$VERSION))
COMMAND="xcrun xcodebuild SYMROOT=${PWD}/output -scheme ${SCHEME} -configuration ${CONFIGURATION} CURRENT_PROJECT_VERSION=${VERSION}"
COMMAND_IOS="${COMMAND} -sdk iphoneos"
COMMAND_SIM="${COMMAND} -sdk iphonesimulator"

mkdir -p Frameworks

if [ -z $SDK ]
then

  ${COMMAND_IOS} ${CLEAN} build

  for SCHEME in $SCHEMES
  do
  
    OUTPUT_IOS=output/${CONFIGURATION}-iphoneos/${SCHEME}.framework
    PUBLIC=Frameworks/${SCHEME}.framework
  
    rm -rf ${PUBLIC}
    mkdir -p $(dirname ${PUBLIC})
    cp -R ${OUTPUT_IOS} ${PUBLIC}
  
  done

  ${COMMAND_SIM} ARCHS=x86_64 ${CLEAN} build

  for SCHEME in $SCHEMES
  do
  
    OUTPUT_SIM=output/${CONFIGURATION}-iphonesimulator/${SCHEME}.framework
    PUBLIC=Frameworks/${SCHEME}.framework
  
    if [ -d ${OUTPUT_SIM}/Modules/${SCHEME}.swiftmodule ]
    then
      cp ${OUTPUT_SIM}/Modules/${SCHEME}.swiftmodule/x86_64* ${PUBLIC}/Modules/${SCHEME}.swiftmodule/
    fi
    xcrun lipo -create ${PUBLIC}/${SCHEME} ${OUTPUT_SIM}/${SCHEME} -output ${PUBLIC}/${SCHEME}

  done

else

  if [ $SDK = iphonesimulator ]
  then
    ${COMMAND_SIM} ARCHS=x86_64 ${CLEAN} build
  elif [ $SDK = iphoneos ]
  then
    ${COMMAND_IOS} ${CLEAN} build
  fi

  for SCHEME in $SCHEMES
  do
    OUTPUT=output/${CONFIGURATION}-$SDK/${SCHEME}.framework
    PUBLIC=Frameworks/${SCHEME}.framework
    rm -rf ${PUBLIC}
    mv ${OUTPUT} ${PUBLIC}
  done

fi

pwd > Frameworks/BUILD_PATH

rm -rf output
