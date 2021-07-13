#!/bin/bash

set -e
set -x

if [ "$1" == "name" ]
then
  awk -F ' ' '{ if ($2 == "java_outer_classname") { gsub("\"|;", "", $4); print $4 } }' $2

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
