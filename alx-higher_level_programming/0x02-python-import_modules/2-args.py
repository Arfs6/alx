#!/usr/bin/python3
from sys import argv


def run():
    """print arguments the file was called with"""
    argc = len(argv)

    if argc == 1:
        print("0 arguments.")
        return

    if argc == 2:
        print("1 argument:")
    else:
        print("{:d} arguments:".format(argc - 1))
    idx = 1
    del argv[0]
    for arg in argv:
        print("{:d}: {:s}".format(idx, arg))
        idx += 1


if __name__ == "__main__":
    run()
