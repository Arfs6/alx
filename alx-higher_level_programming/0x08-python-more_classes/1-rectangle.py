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
