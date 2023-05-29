#!/usr/bin/python3
from sys import argv


def run():
    """add all arguments"""
    del argv[0]
    sum = 0

    for arg in argv:
        sum += int(arg)

    print(sum)


if __name__ == "__main__":
    run()
