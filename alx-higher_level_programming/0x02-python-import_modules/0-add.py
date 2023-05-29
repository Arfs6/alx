#!/usr/bin/python3
from add_0 import add


def test():
    a = 1
    b = 2
    print("{:d} + {:d} = {:d}".format(a, b, add(a, b)))


# execute only if file is not imported
if __name__ == "__main__":
    test()
