#!/usr/bin/node
class Rectangle {
  constructor (w, h) {
    if (w > 0 && h > 0) {
      this.width = w;
      this.height = h;
    }
  }

  // print method to print rectangle using the 'x' character
  print () {
    let i = 0;
    const character = 'X';
    if (!this.width) {
      return;
    }

    for (i = 0; i < this.height; i++) {
      console.log(character.repeat(this.width));
    }
  }

  // rotates the rectangle
  rotate () {
    [this.width, this.height] = [this.height, this.width];
  }

  // doubles the size of the rectangle
  double () {
    if (!this.height) {
      return;
    }

    this.width *= 2;
    this.height *= 2;
  }
}
module.exports = Rectangle;
