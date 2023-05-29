#include <stdlib.h>
#include <stdio.h>

/**
 * main - add positive numbers
 * @argc: argument numbers
 * @argv: numbers to add
 *
 * Return: 0 success
 * 1 non digits
*/
int main(int argc, char *argv[])
{
	int add = 0, i, tmp;
	char *ptr = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		tmp = strtol(argv[i], &ptr, 10);
		if (*ptr)
		{
			printf("Error\n");
			return (1);
		}
		if (tmp < 0)
			continue;
		else
			add += tmp;
	}
	printf("%i\n", add);

	return (0);
}
