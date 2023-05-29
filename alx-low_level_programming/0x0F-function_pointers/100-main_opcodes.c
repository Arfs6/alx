#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the of code of the current file
 * @ac: argument count
 * @av: argument vector
 *
 * Return: 0 success
 * 1 invalid arguments
 * 2 invalid size
*/
int main(int ac, char **av)
{
	int size, i = 0;
		char *buffer = (char *)main;

	if (ac != 2)
	{
		printf("Error\n");
		exit(1);
	}
	size = atoi(av[1]);
	if (size < 0)
	{
		printf("Error\n");
		exit(2);
	}

	while (i < size)
	{
		printf("%02hhx", buffer[i]);
		i++;
		if (i < size)
			putchar(' ');
	}
	putchar('\n');

	return (0);
}
