#!/usr/bin/python3
"""
Solution for task 8
"""

from requests import post
from sys import argv


def run():
    """Send a post request to a server using the url passed with the serach
    term passed"""
    url = 'http://0.0.0.0:5000/search_user'
    try:
        q = argv[1]
    except IndexError:
        q = ""

    response = post(url, {'q': q})

    try:
        result = response.json()
        if not result:
            print('No result')
            return

        print(f"[{result.get('id')}] {result.get('name')}")

    except ValueError:
        print('Not a valid JSON')


if __name__ == '__main__':
    run()
