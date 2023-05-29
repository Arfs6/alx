#!/usr/bin/python3
"""
solve the nqueen challenge using back tracking algorithm
"""

from sys import argv


def run():
    """parse through the arguments and start the script."""
    if len(argv) != 2:
        print("Usage: nqueens N")
        exit(1)

    global size
    try:
        size = int(argv[1])
    except ValueError:
        print("N must be a number")
        exit(1)

    if size < 4:
        print("N must be at least 4")
        exit(1)

    chessBoard = generateChessBoard()
    for i in range(size):
        # print(i)
        chessBoard[0][i] = True
        result = checkQueen(1, chessBoard)
        # check queens starting from second row
        if result:
            printResult(chessBoard)
        chessBoard = generateChessBoard()  # get a new chess board


def checkQueen(row, chessBoard):
    """recursively check for queen in subsequent rows
    Parameter:
    - row: current row in chess board
    - chessBoard: chess board

    Returns:
    - True: position has been fixed successful
    - False: No right position
    """
    if row == size:
        return True

    # check for each column
    for column in range(size):
        if validateQueen(chessBoard, (column, row)):
            chessBoard[row][column] = True  # activate
            if checkQueen(row + 1, chessBoard):  # start recursion
                return True
        chessBoard[row][column] = False  # deactivate

    return False


def validateQueen(chessBoard, point):
    """Checks if the queen doesn't collide with any other queen

    Parameter:
    - chessBoard: chess board represented by matrix
    - point: a tuple representing the queen's position on a 2d plane

    Return:
    - True: queen Ddoesn't collide with any other queen
    -False: queen collide!
    """
    column, row = point
    def testFunc(i, j): return chessBoard[i][j]
    # print(f"in validateQueen: points = {(row, column)}")

    # test vertically
    if not all(not chessBoard[i][column] for i in range(row)):
        # print(f'collission in column {column}')
        return False  # collision!

    # test left diagonal
    x_points = [x for x in range(column - 1, -1, -1)]
    y_points = [y for y in range(row - 1, -1, -1)]
    mapList = list(map(testFunc, y_points, x_points))
    if not all(not i for i in mapList):
        # print("right collision")
        return False

    # test right diagonal
    x_points = [x for x in range(column + 1, size)]
    mapList = list(map(testFunc, y_points, x_points))
    if not all(not i for i in mapList):
        return False

    return True  # all columns have collissions


def printResult(chessBoard):
    """Prints the points of the queens on a 2d plane
    Parameter:
    - chessBoard: chess board
    """
    result = []

    for row in range(size):
        for column in range(size):
            if chessBoard[row][column]:
                result.append([row, column])
                break

    print(result)


def generateChessBoard():
    """generates a chess board of size global size"""
    chessBoard = []
    for i in range(size):
        chessBoard.append([False for i in range(size)])

    return chessBoard


if __name__ == "__main__":
    run()
