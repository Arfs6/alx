#!/usr/bin/python3
"""
A script that takes all the arguments given to a file and saved it as a list in
json format.
"""

from sys import argv
save_to_json_file = __import__("5-save_to_json_file").save_to_json_file
load_from_json_file = __import__("6-load_from_json_file").load_from_json_file


def run():
    """Stores the arguments"""
    del argv[0]
    try:
        argList = load_from_json_file('add_item.json')
    except FileNotFoundError:
        argList = []

    argList += argv
    save_to_json_file(argList, 'add_item.json')


if __name__ == "__main__":
    run()
