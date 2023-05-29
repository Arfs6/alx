-- create a table with auto generated ids
CREATE DATABASE IF NOT EXISTS hbtn_0d_usa;
CREATE TABLE IF NOT EXISTS hbtn_0d_usa.cities(
id INT NOT NULL UNIQUE AUTO_INCREMENT,
state_id INT NOT NULL,
name VARCHAR(256) NOT NULL,
PRIMARY KEY (id),
FOREIGN KEY (id) REFERENCES hbtn_0d_usa.states(id)
);
