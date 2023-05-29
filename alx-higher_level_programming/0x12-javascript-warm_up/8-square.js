#!/usr/bin/node
const size = parseInt(process.argv[2]);
if (!size) {
  console.log('Missing size');
  process.exit();
}

let container, i, j;
for (i = 0; i < size; i++) {
  container = '';
  for (j = 0; j < size; j++) {
    container += 'X';
  }
  console.log(container);
}
