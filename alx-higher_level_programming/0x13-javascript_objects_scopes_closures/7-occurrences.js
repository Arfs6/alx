#!/usr/bin/node
/**
 * nbOccurances - get the number of occurances of an object in array
 * @list: array to search
 * @searchElement: element to search for
 *
 * Return: number of occurances of `searchElement` in `list`.
 */
exports.nbOccurences = function (list, searchElement) {
  if (!list || !searchElement) {
    return 0;
  }

  let count = 0;
  let element;
  for (element in list) {
    if (searchElement === list[element]) {
      count++;
    }
  }

  return count;
};
