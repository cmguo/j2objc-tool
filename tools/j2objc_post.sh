#!/bin/sh

set -x
set -e

WORKSPACE=$(dirname ${PROJECT_DIR})
THIRDPARTY="${WORKSPACE}/ThirdParty"

PUBLIC_HEADERS_FOLDER=${BUILT_PRODUCTS_DIR}/${PUBLIC_HEADERS_FOLDER_PATH}

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
