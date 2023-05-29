#!/usr/bin/python3
from sys import argv, exit
from calculator_1 import add, sub, mul, div


def run():
    """
    entry point for calculator
    """
    if len(argv) != 4:
        print(f"Usage: {argv[0]:s} <a> <operator> <b>")
        exit(1)
    elif argv[2] not in '+-*/':
        print("Unknown operator. Available operators: +, -, * and /")
        exit(1)

    a = int(argv[1])
    b = int(argv[3])
    op = argv[2]

    if op == '-':
        ans = sub(a, b)
    elif op == '+':
        ans = add(a, b)
    elif op == '/':
        ans = div(a, b)
    else:
        ans = mul(a, b)

    print(ans)


if __name__ == "__main__":
    run()
