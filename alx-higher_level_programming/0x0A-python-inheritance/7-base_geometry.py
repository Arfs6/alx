#!/usr/bin/python3
"""
create an empty class to represent a geometry
"""


class BaseGeometry:
    """a class that represents a geometry"""

    def area(self):
        """Raises an exception"""
        raise(Exception("area() is not implemented"))

    def integer_validator(self, name, value):
        """Check if the right integer was passed
        Parameter:
        - name: name of integer. Use for printing error
        - value: integer to inspect.
        Raises:
        - TypeError: value is not an integer
        - ValueError: value is less than zero
        """
        if not type(value) == int:
            raise(TypeError(f"{name} must be an integer"))
        elif value <= 0:
            raise(ValueError(f"{name} must be greater than 0"))
