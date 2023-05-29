#!/usr/bin/python3
"""
Solution for task 7
"""

from requests import get
from sys import argv


def run():
    """Get the content returned by the https server of the url passed"""
    url = argv[1]

    response = get(url)
    if response.status_code >= 400:
        print('Error code:', response.status_code)
        return

    print(response.text)


if __name__ == '__main__':
    run()
