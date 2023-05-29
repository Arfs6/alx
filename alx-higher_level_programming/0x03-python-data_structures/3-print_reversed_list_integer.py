#!/usr/bin/python3


def print_reversed_list_integer(my_list=[]):
    """
    print_reversed_list_integer: prints integers in a list in reverse order
    @my_list: list to print
    """
    length = len(my_list)
    if length == 0:
        return

    for idx in range(1, length + 1):
        print("{:d}".format(my_list[-1 * idx]))
