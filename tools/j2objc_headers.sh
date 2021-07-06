
# Install headers to framework

if [ -f ${DERIVED_FILE_DIR}/J2ObjcHeader1 ]
then
  tar -c - -C ${THIRDPARTY}/objc -T ${DERIVED_FILE_DIR}/J2ObjcHeader1 | tar -x -C ${PUBLIC_HEADERS_FOLDER}
  ${TOOLS}/fix_include.sh -s ${TARGET_NAME} ${PUBLIC_HEADERS_FOLDER}
fi
tar -c - -C ${DERIVED_FILE_DIR}/objc -T ${DERIVED_FILE_DIR}/J2ObjcHeader2 | tar -x -C ${PUBLIC_HEADERS_FOLDER}
if [ -f ${DERIVED_FILE_DIR}/${TARGET_NAME}-J2objc.h ]
then
  cp ${DERIVED_FILE_DIR}/${TARGET_NAME}-J2objc.h ${PUBLIC_HEADERS_FOLDER}/${TARGET_NAME}-J2objc.h
fi
