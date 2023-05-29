#!/usr/bin/python3
"""
Custom integer class. Tries to be the opposite of int.
"""


class MyInt(int):
    """Represents my custom integer"""

    def __new__(self, *args, **kargs):
        """Initialize the attributes of the object"""
        return super(MyInt, self).__new__(self, *args, **kargs)

    def __eq__(self, other):
        """Checks if self is not equal to other"""
        if not isinstance(self, MyInt):
            return True
        return self.real != other.real

    def __ge__(self, other):
        """Returns if self is equal to other"""
        if not isinstance(other, MyInt):
            return False
        return other.__eq__(self.real)
