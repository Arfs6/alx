#!/usr/bin/python3
"""
Solution for task 2
"""

from urllib import request, parse
import sys


def run():
    """Starting point of program"""
    url, email = sys.argv[1], sys.argv[2]

    data = {'email': email}
    data = parse.urlencode(data)
    data = data.encode('utf-8')

    fullUrl = request.Request(url, data)
    with request.urlopen(fullUrl) as response:
        print(response.read().decode('utf-8'))


if __name__ == '__main__':
    run()
