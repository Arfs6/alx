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

class Square extends Rectangle {
  constructor (size) {
    super(size, size);
  }

  /**
   * charPrint - prints a Square with the given character
   * @c: character to use when printing. Default value is 'x'
   */
  charPrint (c = 'X') {
    let i;
    for (i = 0; i < this.height; i++) {
      console.log(c.repeat(this.width));
    }
  }
}

module.exports = Square;
