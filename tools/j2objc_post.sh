#!/bin/sh

set -x
set -e

WORKSPACE=$(dirname ${PROJECT_DIR})
THIRDPARTY="${WORKSPACE}/ThirdParty"


# Install headers to framework

if [ -d ${PROJECT_DIR}/${TARGET_NAME}/com ]
then
  find ${PROJECT_DIR}/${TARGET_NAME}/com -name \*.h -exec sh -c "rm -f ${METAL_LIBRARY_OUTPUT_DIR}/Headers/\$(basename {})" \;
fi
if [ -f ${DERIVED_FILE_DIR}/J2ObjcHeader1 ]
then
  tar -c - -C ${THIRDPARTY}/objc -T ${DERIVED_FILE_DIR}/J2ObjcHeader1 | tar -x -C ${METAL_LIBRARY_OUTPUT_DIR}/Headers
fi
tar -c - -C ${DERIVED_FILE_DIR}/objc -T ${DERIVED_FILE_DIR}/J2ObjcHeader2 | tar -x -C ${METAL_LIBRARY_OUTPUT_DIR}/Headers
if [ -f ${DERIVED_FILE_DIR}/${TARGET_NAME}-J2objc.h ]
then
  cp ${DERIVED_FILE_DIR}/${TARGET_NAME}-J2objc.h ${METAL_LIBRARY_OUTPUT_DIR}/Headers/${TARGET_NAME}-J2objc.h
fi


# Install prefixes to framework

if [ -f ${DERIVED_FILE_DIR}/prefixes.txt ]
then
  cp ${DERIVED_FILE_DIR}/prefixes.txt ${METAL_LIBRARY_OUTPUT_DIR}/prefixes.txt
fi


# Install classes to framework

if [ -f ${DERIVED_FILE_DIR}/classes.jar ]
then
  cp ${DERIVED_FILE_DIR}/classes.jar ${METAL_LIBRARY_OUTPUT_DIR}/classes.jar
fi
