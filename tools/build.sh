#!/bin/bash

set -e
#set -x

# default settings

UPDATE_THIRDPARTY=
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
      echo Usage $0 "[flags]" Scheme
      echo " -r:" Build with Release configuration, default Debug
      echo " -sim:" Build iphonesimulator only
      echo " -os:" Build iphoneos only
      exit 0
  esac
  shift
done

if [ ! -z $UPDATE_THIRDPARTY ]
then
  $(dirname $0)/thirdparty.sh
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

COMMAND="xcrun xcodebuild SYMROOT=${PWD}/output -scheme ${SCHEME} -configuration ${CONFIGURATION}"
COMMAND_IOS="${COMMAND} -sdk iphoneos"
COMMAND_SIM="${COMMAND} -sdk iphonesimulator"

if [ -z $SDK ]
then

  ${COMMAND_IOS} build
  ${COMMAND_SIM} ARCHS=x86_64 build

  for SCHEME in $SCHEMES
  do
  
    OUTPUT_IOS=output/${CONFIGURATION}-iphoneos/${SCHEME}.framework
    OUTPUT_SIM=output/${CONFIGURATION}-iphonesimulator/${SCHEME}.framework
    PUBLIC=Frameworks/${SCHEME}.framework
  
    rm -rf ${PUBLIC}
    mkdir -p $(dirname ${PUBLIC})
    cp -R ${OUTPUT_IOS} ${PUBLIC}
    cp ${OUTPUT_SIM}/Modules/${SCHEME}.swiftmodule/x86_64* ${PUBLIC}/Modules/${SCHEME}.swiftmodule/
    xcrun lipo -create ${OUTPUT_IOS}/${SCHEME} ${OUTPUT_SIM}/${SCHEME} -output ${PUBLIC}/${SCHEME}
  
  done

else

  if [ $SDK = iphonesimulator ]
  then
    ${COMMAND_SIM} ARCHS=x86_64 build
  elif [ $SDK = iphoneos ]
  then
    ${COMMAND_IOS} build
  fi

  for SCHEME in $SCHEMES
  do
    OUTPUT=output/${CONFIGURATION}-$SDK/${SCHEME}.framework
    PUBLIC=Frameworks/${SCHEME}.framework
    rm -rf ${PUBLIC}
    mv ${OUTPUT} ${PUBLIC}
  done

fi

rm -rf output
