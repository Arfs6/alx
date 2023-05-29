#!/bin/bash
# Print the body of an http get request
curl -L -s -o /dev/null -w "%{http_code}" "$1" | grep -q 200 && curl -Ls -X GET "$1"
