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

    # create engine
    cmd = f"mysql://{username}:{passwd}@localhost:3306/{dbname}"
    engine = create_engine(cmd)
    Session = sessionmaker(bind=engine)
    session = Session()

    for state in session.query(State).\
            filter(State.name.like('%a%')).\
            order_by(State.id):
        print(f"{state.id}: {state.name}")


if __name__ == '__main__':
    run()
