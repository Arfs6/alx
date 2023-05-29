#!/bin/bash
# Set a header when sending a get request
curl -s -X GET -H "X-School-User-Id: 98" "$1"
