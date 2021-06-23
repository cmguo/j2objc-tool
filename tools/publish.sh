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
      echo " -s:" Sync to ThirdPartyiOS
      exit 0
      ;;
  esac
  shift
done

V=`grep ".version " $1.podspec | cut -d "'" -f 2`

trap 'git rm -r --quiet --cached Frameworks' EXIT

git add -f Frameworks
TREE=$(git write-tree)
COMMIT=$(git commit-tree $TREE -m "publish $V")
git push -f origin $COMMIT:refs/tags/$V
git push -f origin $COMMIT:refs/heads/publish/$V

if [ ! -z $SYNC ]
then
  $(dirname $0)/thirdparty.sh publish ${PUBLISH_NAME-$1}
fi
