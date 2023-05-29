#!/usr/bin/python3


def print_matrix_integer(matrix=[[]]):
    """
    print_matrix_integer: print a matrix
    @matrix: matrix to print
    """
    if len(matrix[0]) == 0:
        print("")
        return

    for row in matrix:
        for idx in range(len(row)):
            delim = ' '
            if idx == len(row) - 1:
                delim = '\n'
            print("{:d}".format(row[idx]), end=delim)
