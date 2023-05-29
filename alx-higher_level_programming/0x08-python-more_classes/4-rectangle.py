#!/usr/bin/python3
"""
Write a class Rectangle that defines a simple rectangle:
"""


class Rectangle:
    """A class representing a rectangle"""

    def __init__(self, width=0, height=0):
        """Initialize the rectangle Object

        Parameter:
        - width: width of the rectangle
        - height: height of the rectangle

        Raises:
        - TypeError: invalid type for height or width
        - ValueError: invalid value for height or width
        """
        self.width = width
        self.height = height

    @property
    def width(self):
        """Returns the width"""
        return self.__width

    @width.setter
    def width(self, value):
        """Set's the new width of the rectangle"""
        if not isinstance(value, int):
            raise(TypeError("width must be an integer"))
        elif value < 0:
            raise(ValueError("width must be >= 0"))
        self.__width = value

    @property
    def height(self):
        """returns the height attr"""
        return self.__height

    @height.setter
    def height(self, value):
        """Set a new value to height"""
        if not isinstance(value, int):
            raise(TypeError("height must be an integer"))
        elif value < 0:
            raise(ValueError("height must be >= 0"))
        self.__height = value

    def area(self):
        """returns the area of the rectangle"""
        return self.__height * self.__width

    def perimeter(self):
        """Returns the perimeter of the rectangle"""
        if self.__height > 0 and self.__width > 0:
            result = 2 * (self.__height + self.__width)
        else:
            result = 0
        return result

    def __str__(self):
        """Returns a representation of the rectangle on a 2D plane"""
        output = ""
        if self.__height == 0 or self.__width == 0:
            return output

        for i in range(self.__height):
            output += '#' * self.__width
            if i < self.__height - 1:
                output += '\n'

        return output

    def __repr__(self):
        """
        Returns a representation of the rectangle that eval() can use to
        create a new instance of the rectangle
        """
        return f"Rectangle({self.__width}, {self.__height})"
