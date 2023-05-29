#!/usr/bin/python3
"""
create a Square class with size attribute
"""


class Square:
    """A representation of a square"""

    def __init__(self, size=0):
        """initialize an instance of a square
        param:
        `size`: size of square
        """
        if not isinstance(size, int):
            raise(TypeError('size must be an integer'))
        elif size < 0:
            raise(ValueError('size must be >= 0'))
        else:
            self.__size = size

    def area(self):
        return self.__size ** 2
