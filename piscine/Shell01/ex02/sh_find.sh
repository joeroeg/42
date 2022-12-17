#!/bin/sh
find . -name ".git" -type f -print0 | xargs -0 basename -s .git
