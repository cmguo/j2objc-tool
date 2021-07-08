#!/bin/bash

set -x
set -e

SYNC=

while [[ $1 =~ ^-.+ ]]
do
  case $1 in
    -s)
      SYNC=true
      ;;
    *)
      if [ $1 != -h ]
      then
        echo $0: unknown option $1 !!
      fi
      echo Usage $0 [flags...]
      echo " -s:" Also make tags in ThirdPartyiOS and it\'s submodules
      exit 0
      ;;
  esac
  shift
done

TAG=$1

git push -f origin HEAD:refs/tags/$TAG

if [ ! -z $SYNC ]
then
  $(dirname $0)/thirdparty.sh mktag ${PUBLISH_NAME}/$TAG ${DEPEND_THIRDPARTIES}
fi 
