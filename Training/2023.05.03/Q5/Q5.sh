#!/bin/bash

local_repo="$HOME/Workspace"
remote_repo="git@github.com:nabeelali1207/vCognetics.git"

cd "$local_repo"

# git fetch
# git pull

git add .
git commit -m "Updated changes"

git push "$remote_repo" master
