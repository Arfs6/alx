#!/usr/bin/python3
from MySQLdb import connect
from sys import argv
"""Print all the entries in the table states in the database hbtn_0e_0_usa"""


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
    cur.execute("SELECT * FROM states ORDER BY states.id")
    results = cur.fetchall()
    for row in results:
        print(row)


if __name__ == '__main__':
    run()
