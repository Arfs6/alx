#!/usr/bin/python3
"""
write a function that writes a text to a file
"""


def write_file(filename="", text=""):
    """Write a text to a file
    Parameter:
        - filename: name of file to write to
        - text: text to write in the file
        Return:
            - Number of characters written
    """
    if not filename:
        return

    with open(filename, 'w', encoding='utf8') as f_obj:
        return f_obj.write(text)
