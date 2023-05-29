#!/usr/bin/python3
"""
Write a class that inherits from the built in class list.
"""


class MyList(list):
    """Adding functionalities to the builtin list class"""

    def __init__(self, iterable=()):
        """Initialize the list object and inherit from list"""
        super().__init__(iterable)

    def print_sorted(self):
        """Prints the list in sorted order"""
        temp = self.copy()
        temp.sort()
        print(temp)
