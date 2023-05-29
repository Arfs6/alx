#include <stdlib.h>
#include <stdio.h>

/**
 * main - change the money
 * @argc: argument count
 * @argv: money to change
 *
 * Return: 0 success
 * 1 more than 1 argument
*/
int main(int argc, char *argv[])
{
	long int cash, cents = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cash = atoi(argv[1]);
	if (cash < 0)
	{
		printf("0\n");
		return (0);
	}
	while (cash)
	{
		if (cash >= 25)
			cash -= 25;
		else if (cash >= 10)
			cash -= 10;
		else if (cash >= 5)
			cash -= 5;
		else if (cash >= 2)
			cash -= 2;
		else if (cash >= 1)
			cash = 0;

		cents++;
	}
	printf("%ld\n", cents);
	return (0);
}
