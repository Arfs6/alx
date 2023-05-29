#!/usr/bin/python3
"""
write a class Student.
"""


class Student:
    """Represents a student in a school"""

    def __init__(self, first_name, last_name, age):
        """Initialize all the attributes of the object"""
        self.first_name = first_name
        self.last_name = last_name
        self.age = age

    def to_json(self, attrs=None):
        """Converts the attributes of the student to a dict"""
        if not attrs:
            return {
                    'first_name': self.first_name,
                    'last_name': self.last_name,
                    'age': self.age
                    }

        result = dict()
        for attr in attrs:
            result[attr] = getattr(self, attr)

        return result
