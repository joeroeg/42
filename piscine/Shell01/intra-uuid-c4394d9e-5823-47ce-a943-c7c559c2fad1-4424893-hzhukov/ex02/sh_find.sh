#!/bin/sh
find . -name "*.sh" -type f -print0 | xargs -0 basename -s .sh
