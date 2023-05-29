#!/usr/bin/python3
"""
The base class for all the classes in this project
"""

import json
import csv


class Base:
    """The base class for all classes.
    attributes:
    - __nb_objects: number of objects created
    """
    __nb_objects = 0

    def __init__(self, id=None):
        """Initialize the attributes for the object
        Parameter:
        - id: optional id for the object.
        """
        if id:
            self.id = id
        else:
            Base.__nb_objects += 1
            self.id = Base.__nb_objects

    @staticmethod
    def to_json_string(list_dictionaries):
        """Takes a list of dictionaries and converts it to json string"""
        if not list_dictionaries: return '[]'
        return json.dumps(list_dictionaries)

    @classmethod
    def save_to_file(cls, list_objs):
        """Save the list of objects to json
        Parameter:
        - list_objs: list of objects
        """
        filename = f"{cls.__name__}.json"
        if not list_objs: list_objs = []
        list_dict = []
        for obj in list_objs:
            list_dict.append(obj.to_dictionary())
        list_str = cls.to_json_string(list_dict)
        with open(filename, 'w') as file:
            json.dump(list_str, file)

    @staticmethod
    def from_json_string(json_string):
        """Converts a json representation of a dictionary to a dictionary
        Parameter:
        - json_string: string that should contain a json format of a list of
          dictionaries
        """
        if not json_string: return []
        return json.loads(json_string)

    @classmethod
    def create(cls, **dictionary):
        """Create an instance of cls.
        Parameter:
        - dictionary: dictionary containing all the attributes of the instance.
        """
        dummy = cls(3, 4)
        dummy.update(**dictionary)
        return dummy

    @classmethod
    def load_from_file(cls):
        """Load instances of object from file"""
        from os.path import exists
        filename = f"{cls.__name__}.json"
        if not exists(filename): return []
        with open(filename) as file_obj:
            list_obj = json.load(file_obj)

        list_obj = cls.from_json_string(list_obj)
        new_obj = []
        for obj in list_obj:
            new_obj.append(cls.create(**obj))

        return new_obj

    @classmethod
    def save_to_file_csv(cls, list_objs):
        """Saves the lists of objects to a csv file
        Parameter:
        - list_objs: list of class objects.
        """
        filename = f"{cls.__name__}.csv"
        if list_objs:
            fieldnames = [attr for attr in list_objs[0]]
        else: fieldnames = []

        with open(filename, mode='w') as csv_file:
            writer = csv.DictWriter(csv_file, fieldnames=fieldnames)
            writer.writeheader()

            for obj in list_objs:
                writer.writerow(obj)

    @classmethod
    def load_from_file_csv(cls):
        """Returns list of saved class instances"""
        filename = f"{cls.__name__}.csv"

        from os.path import exists
        if not exists(filename): return []

        list_objs = []
        with open(filename) as csv_file:
            reader = csv.DictReader(csv_file)
            for idx, row in enumerate(reader):
                if idx == 0: continue
                list_objs.append(row)

        return list_objs
