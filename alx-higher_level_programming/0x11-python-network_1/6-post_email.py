#!/usr/bin/python3
"""
Solution for task 6
"""

from requests import post
from sys import argv


def run():
    """Send a post request to the url passed with the email passed as email
    parameter"""
    url, email = argv[1], argv[2]

    response = post(url, {'email': email})
    print(response.text)


if __name__ == '__main__':
    run()
