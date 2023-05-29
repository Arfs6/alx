#!/usr/bin/python3
"""
Solution for task 0
"""

import urllib.request


def run():
    """Entery point for program"""
    url = 'https://alx-intranet.hbtn.io/status'
    with urllib.request.urlopen(url) as response:
        data = response.read()
        print(f"Body response:\n"
              f"\t- type: {type(data)}\n"
              f"\t- content: {data}\n"
              f"\t- utf8 content: {data.decode('utf-8')}")


if __name__ == '__main__':
    run()
