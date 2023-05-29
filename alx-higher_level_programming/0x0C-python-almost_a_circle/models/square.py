#!/usr/bin/python3
"""
this model has the Square class.
"""

from .rectangle import Rectangle


class Square(Rectangle):
    """A class that represents a square. Inherits from rectangle"""

    def __init__(self, size, x=0, y=0, id=None):
        """initialize all the attributes of the square"""
        super().__init__(size, size, x, y, id)

    @property
    def size(self):
        """getter method for size attribute"""
        return self.height

    @size.setter
    def size(self, value):
        """setter method for size attribute"""
        self.width = value
        self.height = value

    def __str__(self):
        """Returns a string representation of the square"""
        return (f"[Square] ({self.id}) "
                f"{self.x}/{self.y} - {self.height}")

    def update(self, *args, **kwargs):
        """Updates some attributes of the object"""
        attrs = ('id', 'size', 'x', 'y')
        if not args:
            # No positional arguments
            # check and update kew word arguments
            for key, value in kwargs.items():
                if key in attrs:
                    setattr(self, key, value)

        for idx, value in enumerate(args):
            setattr(self, attrs[idx], value)

    def to_dictionary(self):
        """Returns a dictionary representation of the square"""
        attrs = ('id', 'size', 'x', 'y')
        return {attr: getattr(self, attr) for attr in attrs}
