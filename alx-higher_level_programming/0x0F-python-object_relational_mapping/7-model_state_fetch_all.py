#!/usr/bin/python3
"""
Using orm to manupulate mysql database
"""
from sys import argv
from sqlalchemy.orm import sessionmaker
from sqlalchemy import create_engine

from model_state import Base, State


def run():
    """Print all the states in the states table"""
    username = argv[1]
    passwd = argv[2]
    dbname = argv[3]

    # create engine
    cmd = f"mysql://{username}:{passwd}@localhost:3306/{dbname}"
    engine = create_engine(cmd)
    Session = sessionmaker(bind=engine)
    session = Session()

    for id, name in session.query(State.id, State.name).order_by(State.id):
        print(f"{id}: {name}")


if __name__ == '__main__':
    run()
