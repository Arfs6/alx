#!/usr/bin/python3
"""
given a byte code of a class, construct the source code of that class
"""

import math


class MagicClass:
    """reversing a python bytecode"""

    def __init__(self, radius=0):
        """initialize the magic class"""
        self.__radius = 0
        if type(radius) is not int and type(radius) is not float:
            raise(TypeError('radius must be a number'))
        self.__radius = radius

    def area(self):
        """return the area of the circle"""
        return math.pi * (self.__radius ** 2)

    def circumference(self):
        """returns the circumfrence of the circle"""
        return 2 * math.pi * self.__radius
