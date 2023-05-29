#!/usr/bin/python3
"""
solution for task 0 in test driven development project
"""


def add_integer(a, b=98):
    """addd two integers
    Parameters:
    - a: first number to add.
    - b: second number to add.

    Return:
    - sum of a and b
    """
    if not isinstance(a, (int, float)):
        raise(TypeError("a must be an integer"))
    elif not isinstance(b, (int, float)):
        raise(TypeError("b must be an integer"))

    a = int(a)
    b = int(b)
    return a + b
