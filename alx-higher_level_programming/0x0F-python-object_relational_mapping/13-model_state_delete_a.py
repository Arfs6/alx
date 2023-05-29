#!/usr/bin/python3
"""
Using orm to manupulate mysql database
"""
from sys import argv
from sqlalchemy.orm import sessionmaker
from sqlalchemy import create_engine

from model_state import Base, State


def run():
    """Delete any state that it's name has `a`."""
    username = argv[1]
    passwd = argv[2]
    dbname = argv[3]

    # create engine
    cmd = f"mysql://{username}:{passwd}@localhost:3306/{dbname}"
    engine = create_engine(cmd, echo=True)
    Session = sessionmaker(bind=engine)
    session = Session()

    # Find the states and delete it
    states = session.query(State).\
        filter(State.name.like('%a%')).\
        all()

    if not states:
        return

    print(f"type states: {type(states)}")
    print(f"type states[0]: {type(states[0])}")
    for state in states:
        print(f"delete [{state.name}]")
        session.delete(state)

    session.commit()


if __name__ == '__main__':
    run()
