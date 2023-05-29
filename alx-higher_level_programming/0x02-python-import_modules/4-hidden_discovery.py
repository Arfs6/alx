#!/usr/bin/python3
import hidden_4


def run():
    """print all the names in hidden_4 module"""

    names = dir(hidden_4)

    for name in names:
        if name[:2] == "__":
            continue

        print(name)


if __name__ == "__main__":
    run()
