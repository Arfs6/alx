#!/usr/bin/python3
from MySQLdb import connect
from sys import argv
"""Print all the entries in the table states in the database hbtn_0e_0_usa
where the argument passed match with the name
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

    #select matching states
    cur.execute("""SELECT cities.id, cities.name AS city, states.name AS state
            FROM cities
            JOIN states ON cities.state_id = states.id
            ORDER BY cities.id""")
    results = cur.fetchall()
    for row in results:
        print(row)


if __name__ == '__main__':
    run()