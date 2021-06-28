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
if [[ $V =~ "\"" ]]
then
  V=`echo $V  | cut -d '"' -f 2`
fi

trap 'git rm -r --quiet --cached Frameworks' EXIT

REV=`git log -1 --pretty=format:"%h %ad %s [%an]" --date=short`

git add -f Frameworks
TREE=$(git write-tree)
COMMIT=$(git commit-tree $TREE -m "build with $REV, publish $V")
ORIGIN=${GIT_ORIGIN-origin}
git push -f $ORIGIN $COMMIT:refs/tags/$V
git push -f $ORIGIN $COMMIT:refs/heads/publish/$V

if [ ! -z $SYNC ]
then
  $(dirname $0)/thirdparty.sh publish ${PUBLISH_NAME-$1} "$REV"
fi
