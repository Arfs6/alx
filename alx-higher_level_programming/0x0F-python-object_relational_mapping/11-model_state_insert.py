#!/usr/bin/python3
"""
Using orm to manupulate mysql database
"""
from sys import argv
from sqlalchemy.orm import sessionmaker
from sqlalchemy import create_engine

from model_state import Base, State


def run():
    """print the State object that contain `a` in it's name."""
    username = argv[1]
    passwd = argv[2]
    dbname = argv[3]
    newState = 'Louisiana'

    # create engine
    cmd = f"mysql://{username}:{passwd}@localhost:3306/{dbname}"
    engine = create_engine(cmd)
    Session = sessionmaker(bind=engine)
    session = Session()

    # insert the new state
    session.add(State(name=newState))
    session.commit()


if __name__ == '__main__':
    run()
