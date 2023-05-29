#!/usr/bin/node
if (process.argv.length <= 3) {
  console.log('0');
  process.exit();
}

let numArr = process.argv.splice(2).map(num => parseInt(num));
numArr = numArr.sort((a, b) => a - b);
console.log(numArr[numArr.length - 2]);
