#!/usr/bin/python3
"""
Solution for task 1
"""

import sys
import urllib.request


def run():
    """Starting point of program"""
    url = sys.argv[1]
    with urllib.request.urlopen(url) as response:
        print(response.headers.get('X-Request-Id'))


if __name__ == '__main__':
    run()
