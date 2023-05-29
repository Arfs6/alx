#include <stdlib.h>
#include <stdio.h>

/**
 * main - multiply two numbers
 * @argc: arguments count
 * @argv: numbers
 *
 * Return: 0 success
 * 1 if less than 2 arguments
*/
int main(int argc, char *argv[])
{
	int mul = 1, i;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
	mul *= atoi(argv[i]);
	printf("%i\n", mul);
	return (0);
}
