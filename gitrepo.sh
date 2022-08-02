#!/bin/sh

repo="https://github.com/Chosimja/test.git"

git init

git remote remove origin

git remote add origin $repo

echo "repo를 $repo로 변경합니다."