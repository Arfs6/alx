#!/usr/bin/python3
"""
Using orm to manupulate mysql database
"""
from sys import argv
from sqlalchemy.orm import sessionmaker
from sqlalchemy import create_engine

from model_state import Base, State


def run():
    """Update the name of the state object with `id` == 2."""
    username = argv[1]
    passwd = argv[2]
    dbname = argv[3]
    newName = 'New Mexico'

    # create engine
    cmd = f"mysql://{username}:{passwd}@localhost:3306/{dbname}"
    engine = create_engine(cmd)
    Session = sessionmaker(bind=engine)
    session = Session()

    # Find the state and modify it
    state = session.query(State).filter(State.id == 2).first()
    if not state:
        return
    state.name = newName
    session.commit()


if __name__ == '__main__':
    run()
