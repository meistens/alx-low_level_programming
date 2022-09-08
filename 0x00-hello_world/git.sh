#!/bin/bash
git add . -A
read -p "commit message: " desc
git commit -m "$desc"
git push
