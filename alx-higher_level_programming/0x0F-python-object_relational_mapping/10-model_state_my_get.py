#!/usr/bin/python3
"""
Using orm to manupulate mysql database
"""
from sys import argv
from sqlalchemy.orm import sessionmaker
from sqlalchemy import create_engine

from model_state import Base, State


def run():
    """print the State object that contain the passed string as it's name."""
    username = argv[1]
    passwd = argv[2]
    dbname = argv[3]
    arg = argv[4]

    # create engine
    cmd = f"mysql://{username}:{passwd}@localhost:3306/{dbname}"
    engine = create_engine(cmd)
    Session = sessionmaker(bind=engine)
    session = Session()

    for state in session.query(State).\
            filter(State.name == arg).\
            order_by(State.id):
        print(state.id)
    # check if No result was found
    try:
        state
    except NameError:
        print('Not found')


if __name__ == '__main__':
    run()
