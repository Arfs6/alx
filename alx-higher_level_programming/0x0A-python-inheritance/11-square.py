#!/usr/bin/python3
"""
create an empty class to represent a geometry
"""

BaseGeometry = __import__('7-base_geometry').BaseGeometry
Rectangle = __import__("9-rectangle").Rectangle


class Square(Rectangle):
    """A class representing a square."""

    def __init__(self, size):
        """Initializes the attributes for the square"""
        self.integer_validator("size", size)
        self.__size = size

    def area(self):
        """Returns the area of the square"""
        return self.__size ** 2

    def __str__(self):
        """Returns a string representation of the square"""
        return f"[Square] {self.__size}/{self.__size}"
