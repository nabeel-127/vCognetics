#!/bin/bash

keyword="keyword"
dir="TextFiles"

grep -rnw "$dir" -e "$keyword" > output.txt
cat output.txt
