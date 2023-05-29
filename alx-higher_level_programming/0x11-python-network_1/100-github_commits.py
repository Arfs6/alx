#!/usr/bin/python3
"""
List the most recent commits of a github user
"""

from requests import get
from sys import argv


def run():
    """Program starts here"""
    username, repoName = argv[2], argv[1]
    url = (f'https://api.github.com/repos/{username}/{repoName}/commits'
           f'?per_page=10')

    response = get(url)

    commits = response.json()
    for commit in commits:
        try:
            sha = commit.get('sha')
            name = commit['commit']['author']['name']
            print(f"{sha}: {name}")
        except KeyError:
            continue


if __name__ == '__main__':
    run()
