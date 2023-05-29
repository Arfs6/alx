#!/usr/bin/python3
"""
This module have the class Rectangle.
"""

from .base import Base


class Rectangle(Base):
    """A representation of a rectangle"""

    def __init__(self, width, height, x=0, y=0, id=None):
        """Initialize all the attributes
        Parameter:
        - width: width of rectangle
        - height: height of rectangle
        -x: x position on a 2d plane
        - y: y position on a 2d plane
        """
        self.width = width
        self.height = height
        self.x = x
        self.y = y
        super().__init__(id)

    @property
    def width(self):
        """getter method for width"""
        return self.__width

    @width.setter
    def width(self, value):
        """setter method for width"""
        if type(value) != int:
            raise(TypeError("width must be an integer"))
        elif value <= 0:
            raise(ValueError("width must be > 0"))

        self.__width = value

    @property
    def height(self):
        """getter method for height"""
        return self.__height

    @height.setter
    def height(self, value):
        """setter method for height"""
        if type(value) != int:
            raise(TypeError("height must be an integer"))
        elif value <= 0:
            raise(ValueError("height must be > 0"))

        self.__height = value

    @property
    def x(self):
        """getter method for x"""
        return self.__x

    @x.setter
    def x(self, value):
        """setter method for x"""
        if type(value) != int:
            raise(TypeError("x must be an integer"))
        elif value < 0:
            raise(ValueError("x must be >= 0"))

        self.__x = value

    @property
    def y(self):
        """getter method for y"""
        return self.__y

    @y.setter
    def y(self, value):
        """setter method for y"""
        if type(value) != int:
            raise(TypeError("y must be an integer"))
        elif value < 0:
            raise(ValueError("y must be >= 0"))

        self.__y = value

    def area(self):
        """Returns the area of the rectangle."""
        return self.__width * self.__height

    def display(self):
        """Prints a 2d representation of the rectangle"""
        for i in range(self.y):
            print()
        for i in range(self.height):
            print(f"{self.x * ' '}{'#' * self.width}")

    def __str__(self):
        """Returns a string representation of the Rectangle"""
        return f"[Rectangle] ({self.id}) {self.x}/{self.y} - {self.width}/{self.height}"

    def update(self, *args, **kwargs):
        """Updates some attributes of the object"""
        attrs = ('id', 'width', 'height', 'x', 'y')
        if not args:
            # No positional arguments
            # check and update kew word arguments
            for key, value in kwargs.items():
                if key in attrs:
                    setattr(self, key, value)

        for idx, value in enumerate(args):
            setattr(self, attrs[idx], value)

    def to_dictionary(self):
        """Returns a dictionary representation of the rectangle"""
        attrs = ('id', 'width', 'height', 'x', 'y')
        return {attr: getattr(self, attr) for attr in attrs}
