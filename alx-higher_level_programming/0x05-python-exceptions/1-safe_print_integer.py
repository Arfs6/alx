#!/usr/bin/python3
"""
Write a function that prints an integer with "{:d}".format().
"""


def safe_print_integer(value):
    """
    print's an integer
    @value: integer to print

    Return: True: success
    False: not an integer
    """
    try:
        print("{:d}".format(value))
    except (TypeError, ValueError):
        return False

    return True
