#!/usr/bin/python3
from MySQLdb import connect
from sys import argv
"""Print all the entries in the table states in the database hbtn_0e_0_usa
where the name starts with `N`.
"""


def run():
    """start executing the script"""
    port = 3306  # port to connect to
    username = argv[1]
    passwd = argv[2]
    database = argv[3]

    # make a connection and get a cursor object
    db = connect(user=username, passwd=passwd, port=port, db=database)
    cur = db.cursor()

    #select all states in the table `states`.
    cur.execute("SELECT * FROM states WHERE BINARY name LIKE 'N%' ORDER BY id")
    results = cur.fetchall()
    sortFetch(results)
    for row in results:
        print(row)


def sortFetch(results):
    """Sorts the fetch result from mysql
    Parameter:
    - results: results returned by mysql
    """
    if not results:
        return

    sorted = False
    length = len(results)
    while not sorted:
        sorted = True
        for idx in range(1, length):
            if results[idx - 1] > results[idx]:
                sorted = False
                results[idx - 1], results[idx] = results[idx],\
                    results[idx - 1]


if __name__ == '__main__':
    run()
