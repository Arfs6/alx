#!/usr/bin/python3
"""
City class is declared here
"""

from sqlalchemy import ForeignKey, Column, Integer, String
from sqlalchemy.orm import relationship

from model_state import Base, State


class City(Base):
    __tablename__ = 'cities'

    # columns
    id = Column(Integer, primary_key=True, autoincrement=True, nullable=False)
    name = Column(String(128), nullable=False)
    state_id = Column(Integer, ForeignKey('state.id'), nullable=False)

    # define relationship
    state = relationship("State")  # back_populated="city")
