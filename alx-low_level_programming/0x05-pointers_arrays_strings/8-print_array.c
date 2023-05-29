#include "main.h"
#include <stdio.h>

/**
* print_array - Print the elements in the array passed
* @a: the array
* @n: number of elements to print
*/
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		if (i < (n - 1))
		printf("%i, ", a[i]);
		else
		printf("%i", a[i]);
		i++;
	}
	printf("\n");
}
