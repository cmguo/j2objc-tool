#!/bin/bash

set -x
set -e

V=`grep ".version " $1.podspec | cut -d "'" -f 2`

git fetch origin refs/tags/$V
git checkout FETCH_HEAD
