#!/usr/bin/python3
"""
create an empty class to represent a geometry
"""

BaseGeometry = __import__('7-base_geometry').BaseGeometry


class Rectangle(BaseGeometry):
    """A class that represents a rectangle"""

    def __init__(self, width, height):
        """initialize the attributes of the rectangle
        Parameter:
        - height: height of rectangle. An integer greater than zero
        - width: width of rectangle. An integer greater than zero
        """
        super().__init__()
        self.integer_validator("width", width)
        self.integer_validator("height", height)
        self.__height = height
        self.__width = width

    def area(self):
        """Returns the area of the rectangle"""
        return self.__width * self.__height

    def __str__(self):
        """Returns a string representation of the rectangle"""
        return f"[Rectangle] {self.__width}/{self.__height}"
