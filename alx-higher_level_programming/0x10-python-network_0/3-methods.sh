#!/bin/bash
# Print all the http method a server supports
curl -s -X OPTIONS -I "$1" | grep 'Allow: ' | cut -d ' ' -f2-
