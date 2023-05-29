#!/usr/bin/python3
"""Write a function that prints a square with the character #."""


def print_square(size):
    """prints a square on a 2d plane using the # character

    Parameter:
    - size: size of square

    Raises:
    - TypeError: invalid size
    - ValueError: size less than zero
    """
    if not isinstance(size, int):
        raise(TypeError("size must be an integer"))
    elif size < 0:
        raise(ValueError("size must be >= 0"))

    # just print an empty line if size is zero
    if size == 0:
        return

    for i in range(size):
        print("#" * size)
