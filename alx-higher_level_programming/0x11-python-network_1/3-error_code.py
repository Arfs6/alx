#!/usr/bin/python3
"""
Solution for task 3
"""

from urllib import request, error
from sys import argv


def run():
    """Open and read the url passed in command line"""
    url = argv[1]

    with request.urlopen(url) as response:
        print(response.read().decode('utf-8'))


if __name__ == '__main__':
    try:
        run()
    except error.HTTPError as e:
        print('Error code:', e.code)
