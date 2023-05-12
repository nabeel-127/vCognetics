#!/bin/bash

src_dir=SRC_DIR
dest_dir=DEST_DIR

if [ $# -eq 2 ]
then
    src_dir=$1
    dest_dir=$2
else
    echo "Usage: $0 <source directory> <destination directory>"
    exit 1
fi

filename=Backup_$(date +%Y.%m.%d).tar.gz

# compress=true
read -p "Compress output? (y/n): " compress

cd $src_dir
if [ $compress == 'y' ] || [ $compress == 'Y' ]
then
	echo "Hello if"
	tar -czvf ../$dest_dir/compressed$filename .
elif [ $compress == 'n' ] || [ $compress == 'N' ]; then
	echo "Hello elif"
    cp -r ./* ../$dest_dir/
fi

# chusr chgrp, run sudo, command line arguments, corner cases