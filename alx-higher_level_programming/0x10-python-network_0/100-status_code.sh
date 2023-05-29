#!/bin/bash
# Print the body of an http get request
curl -s -o /dev/null -w "%{http_code}" "$1"
