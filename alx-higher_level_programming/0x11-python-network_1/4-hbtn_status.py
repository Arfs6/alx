#!/usr/bin/python3
"""
Solution for task 4
"""

import requests


def run():
    """Use request.get to get a page"""
    url = 'https://alx-intranet.hbtn.io/status'

    response = requests.get(url)
    print(f"Body response:\n"
          f"\t- type: {type(response.text)}\n"
          f"\t- content: {response.text}")


if __name__ == '__main__':
    run()
