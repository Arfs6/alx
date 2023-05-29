#!/usr/bin/python3
"""
Solution for task 5
"""

from requests import get
from sys import argv


def run():
    """Get a variable from the header of a http response returned by an url
    passed"""
    url = argv[1]

    response = get(url)
    print(response.headers.get('X-Request-Id'))


if __name__ == '__main__':
    run()
