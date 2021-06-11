#!/bin/sh

set -x
set -e

TEMP=${DERIVED_FILE_DIR-.}

DST=$1
shift

find $DST -name \*.h > $TEMP/DST.list
if [ "$FIX_INCLUDE_NO_SOURCE" != "true" ]
then
  find $DST -name \*.m >> $TEMP/DST.list
fi

for i in $*
do
  F=${i##*/}
  F=${F%.framework}
  if [ ! -f $TEMP/$F.f ]
  then
    find $i/Headers -name \*.h | awk "{ sub(\"$i/Headers/\", \"\", \$0); print \$0 }" > $TEMP/$F.f
  fi
  FS="$FS $TEMP/$F.f"
done 

awk -F ' ' -f $(dirname $0)/fix_include.awk $FS $(<$TEMP/DST.list)

rm -f $FS
rm -f $TEMP/DST.list
