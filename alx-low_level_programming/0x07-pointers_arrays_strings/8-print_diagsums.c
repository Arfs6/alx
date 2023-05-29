#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print the sum of the diagonals of a square array
 * @a: square array
 * @size: size of array
*/
void print_diagsums(int *a, int size)
{
	int temp, i, j;

	temp = 0;
	for (i = 0; i < size * size; i = i + size + 1)
	temp = temp + a[i];
	printf("%i, ", temp);

	temp = 0;
	for (j = size - 1; j <= size * size - size; j = size + j - 1)
	temp = temp + a[j];
	printf("%i\n", temp);
}
