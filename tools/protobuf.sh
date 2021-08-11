#!/bin/bash

set -e
set -x

if [ "$1" == "copyobjc" ]
then
  JAVA_PACKAGE=`awk -F ' ' '{ if ($2 == "java_package") { gsub("\"|;", "", $4); print $4 } }' ${INPUT_FILE_PATH}`
  if [ -z $JAVA_PACKAGE ]
  then
    JAVA_PACKAGE=`awk -F ' ' '{ if ($1 == "package") { gsub("\"|;", "", $2); print $2 } }' ${INPUT_FILE_PATH}`
  else
    JAVA_PACKAGE=${JAVA_PACKAGE//\./\/}
  fi

  JAVA_CLASSNAME=`awk -F ' ' '{ if ($2 == "java_outer_classname") { gsub("\"|;", "", $4); print $4 } }' ${INPUT_FILE_PATH}`
  if [ -z $JAVA_CLASSNAME ]
  then
    JAVA_CLASSNAME=$(basename ${INPUT_FILE_BASE})
  fi
  
  if [ -f ${DERIVED_FILE_DIR}/objc/$JAVA_PACKAGE/$JAVA_CLASSNAME.m ]
  then
    mv -f ${DERIVED_FILE_DIR}/objc/$JAVA_PACKAGE/$JAVA_CLASSNAME.m ${DERIVED_FILE_DIR}/J2objc/${INPUT_FILE_BASE}.m
  fi

elif [ "$1" == "compile" ]
then
  PROTO_PATH=$2
  JAVA_OUT=$3
  shift 3
  for i in ${PROTO_PATH//:/ }
  do
    IPP="$IPP -I$i"
  done
  export PATH=$PATH:$(dirname $0)/../protoc-3.0.0/bin
  protoc $IPP --javalite_out $JAVA_OUT $*

else
  echo unkown command $1
  exit 1

fi
