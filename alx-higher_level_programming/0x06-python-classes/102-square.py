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
        self.size = size

    @property
    def size(self):
        """return self.__size attribute"""
        return self.__size

    @size.setter
    def size(self, value):
        """ set the value of the size attribute
        `value`: new value
        """
        if not isinstance(value, int):
            raise(TypeError('size must be an integer'))
        elif value < 0:
            raise(ValueError('size must be >= 0'))
        else:
            self.__size = value

    def area(self):
        """return area of square"""
        return self.__size ** 2

    def __eq__(self, other):
        """support for the == operator"""
        if isinstance(other, Square):
            return self.size == other.size
        return False

    def __ne__(self, other):
        """support for the != operator"""
        if isinstance(other, Square):
            return self.size != other.size
        return False

    def __lt__(self, other):
        """support for the < operator"""
        if isinstance(other, Square):
            return self.size < other.size
        return False

    def __gt__(self, other):
        """support for the > operator"""
        if isinstance(other, Square):
            return self.size > other.size
        return False

    def __ge__(self, other):
        """support for the >= operator"""
        if isinstance(other, Square):
            return self.size >= other.size
        return False

    def __le__(self, other):
        """support for the <= operator"""
        if isinstance(other, Square):
            return self.size <= other.size
        return False
