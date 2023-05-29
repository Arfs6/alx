#!/usr/bin/python3
"""
create a Square class with size attribute
"""


class Square:
    """A representation of a square"""

    def __init__(self, size=0, position=(0, 0)):
        """initialize an instance of a square
        param:
        `size`: size of square
        """
        self.size = size
        self.position = position

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

    @property
    def position(self):
        """get's the position of the square"""
        return self.__position

    @position.setter
    def position(self, value):
        """set's the position of the square"""
        if not isinstance(value, tuple) or len(value) != 2:
            raise(TypeError('position must be a tuple of 2 positive integers'))
        a, b = value
        if not isinstance(a, int) or not isinstance(b, int):
            raise(TypeError('position must be a tuple of 2 positive integers'))
        elif a < 0 or b < 0:
            raise(TypeError('position must be a tuple of 2 positive integers'))

        self.__position = value

    def area(self):
        """return area of square"""
        return self.__size ** 2

    def my_print(self):
        """print the square"""
        if self.__size == 0:
            print('')
            return

        for i in range(self.__position[1]):
            print('')
        for i in range(self.__size):
            row = "{}{}".format(' ' * self.__position[0], '#' * self.__size)
            print(row)

    def __str__(self):
        """Returns a string to print representing the square"""
        str = ''
        newLine = '\n'
        if self.__size == 0:
            return str

        for i in range(self.__position[1]):
            str += newLine
        for i in range(self.__size):
            row = "{}{}".format(' ' * self.__position[0], '#' * self.__size)
            if i + 1 != self.__size:
                row += '\n'
            str += row

        return str
