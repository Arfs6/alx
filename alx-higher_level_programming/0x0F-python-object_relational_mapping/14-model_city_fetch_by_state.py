#!/usr/bin/python3
"""
Using orm to manupulate mysql database
"""
from sys import argv
from sqlalchemy.orm import sessionmaker
from sqlalchemy import create_engine, join

from model_state import Base, State
from model_city import City


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

    foo = session.query(City).select_from(join(City, State,
        onclause='State.id = City.state_id'))
    # print(f"foo = {foo}")
    for city in foo:
        print(f"{city.state.name} ({city.id}) {city.name}")
    # for state, city in session.query(City).\
    #     join(State).\
    #     filter(State.id == City.state_id).order_by(City.id).all():
    #     print(f"{state_name} ({city.id}) {city.name}")


if __name__ == '__main__':
    run()
