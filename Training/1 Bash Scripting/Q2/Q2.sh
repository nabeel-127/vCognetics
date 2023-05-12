#!/bin/bash

keyword="keyword"
dir="TextFiles"

if [ $# -eq 2 ]
then
    keyword=$1
    dir=$2
else
    echo "Usage: $0 <keyword> <directory>"
    exit 1
fi

grep -rnw "$dir" -e "$keyword" > output.txt
cat output.txt

