#!/usr/bin/python3
"""
state class is declared here
"""

from sqlalchemy import Column, Integer, String
from sqlalchemy.ext.declarative import declarative_base
from sqlalchemy.orm import relationship


# Creating instance of declarative base
Base = declarative_base()


class State(Base):
    __tablename__ = 'states'

    # columns
    id = Column(Integer, primary_key=True, autoincrement=True, nullable=False)
    name = Column(String(128), nullable=False)

    # define city relationship
    # city = relationship("City", order_by=city.id,
    #         back_populated='state')
