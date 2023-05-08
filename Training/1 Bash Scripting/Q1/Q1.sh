#!/bin/bash

src_dir=SRC_DIR
dest_dir=DEST_DIR

filename=Backup_$(date +%Y.%m.%d).tar.gz

# compress=true
read -p "Compress output? (y/n): " compress

cd $src_dir
if [ $compress == 'y' ] || [ $compress == 'Y' ]
then
	echo "Hello if"
	tar -czvf ../$dest_dir/compressed$filename .
elif [ $compress == 'n' ] || [ $compress == 'N' ]; then
	echo "Hello else"
	tar -cvf ../$dest_dir/uncompressed$filename .
fi
