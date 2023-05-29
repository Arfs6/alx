#include "3-calc.h"

/**
 * main - add two numbers
 * @ac: argument count
 * @av: argument vector
 *
 * Return: 0 (success)
 * 98 if ac is not equal to 4
 * 99 invalid operant
 * 100 if divides by 0
*/
int main(int ac, char **av)
{
	int ans, num1, num2;
	int (*opFuncPtr)(int, int);
	char *op;

	if (ac != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(av[1]);
	num2 = atoi(av[3]);
	op = av[2];
	opFuncPtr = get_op_func(op);
	if (!opFuncPtr)/*invalid operator */
	{
		printf("Error\n");
		exit(99);
	}
	if ((*op == '/' || *op == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	ans = opFuncPtr(num1, num2);
	printf("%i\n", ans);

	return (0);
}
