#!/usr/bin/python3
"""
Write a class Rectangle that defines a simple rectangle:
"""


class Rectangle:
    """
    A class representing a rectangle

    Public Attribute:
    - number_of_instances: Number of square instances
    - print_symbol: symbol to use for __str__ method
    """
    number_of_instances = 0
    print_symbol = '#'

    @staticmethod
    def bigger_or_equal(rect_1, rect_2):
        """Returns the bigger rectangle

        Parameter:
        - rect_1: first rectangle instance
        - rect_2: second Rectangle instance to compare with

        Raises:
        - TypeError: invalid parameters
        """
        if not isinstance(rect_1, Rectangle):
            raise(TypeError("rect_1 must be an instance of Rectangle"))
        elif not isinstance(rect_2, Rectangle):
            raise(TypeError("rect_2 must be an instance of Rectangle"))
        if rect_1.area() >= rect_2.area():
            return rect_1
        return rect_2

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

        # increment number of instances
        Rectangle.number_of_instances += 1

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
            output += str(Rectangle.print_symbol) * self.__width
            if i < self.__height - 1:
                output += '\n'

        return output

    def __repr__(self):
        """
        Returns a representation of the rectangle that eval() can use to
        create a new instance of the rectangle
        """
        return f"Rectangle({self.__width}, {self.__height})"

    def __del__(self):
        """Print a message before deleting the rectangle"""
        print("Bye rectangle...")
        # decrement the number of instances
        Rectangle.number_of_instances -= 1
