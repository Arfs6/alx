#!/usr/bin/python3
"""
create an empty class to represent a geometry
"""


class BaseGeometry:
    """a class that represents a geometry"""

    def area(self):
        """Raises an exception"""
        raise(Exception("area() is not implemented"))
