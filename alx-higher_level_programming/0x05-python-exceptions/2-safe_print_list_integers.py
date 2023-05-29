#!/usr/bin/python3
"""
Write a function that prints the first x elements of a list and only integers.
"""


def safe_print_list_integers(my_list=[], x=0):
    """
    print integers in list
    @my_list: list
    @x: number of elements to print
    """
    count = 0

    for i in range(x):
        try:
            print("{:d}".format(my_list[i]), end='')
            count += 1
        except (TypeError, ValueError):
            continue

    print('')  # print new line
    return count
