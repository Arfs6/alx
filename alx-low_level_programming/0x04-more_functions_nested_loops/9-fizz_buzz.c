#include <stdio.h>
#include "main.h"

/**
 * main - print numbers from 1 - 100
 * for multiples of three print fizz instead
 * for multiples of 5 print buzz instead
 * for multiple of both 3 and 5 print fizz buzz
 *
 * Return: always 0
*/
int main(void)
{
	int i;

	for (i = 1; i < 101; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		printf(" FizzBuzz");
		else if (i % 5 == 0)
		printf(" Buzz");
		else if (i % 3 == 0)
		printf(" Fizz");
		else if (i == 1)
		printf("%i", i);
		else
		printf(" %i", i);
	}
	putchar('\n');
	return (0);
}
