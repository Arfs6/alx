/* A program to print all possible diffrent combination of three digits. */
#include <stdio.h>

/**
 * main - initializing
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	int num_1 = 0;
	int num_2 = 1;
	int num_3 = 2;

	while ((num_1 <= 10) && (num_2 <= 10) && (num_3 <= 10))
	{
		putchar(num_1 % 10 + '0');
		putchar(num_2 % 10 + '0');
		putchar(num_3 % 10 + '0');
		num_3++;
		if ((num_3 >= 10) && (num_2 <= 8))
		{
			num_2++;
			num_3 = num_2 + 1;
		}
		if ((num_2 >= 8) && (num_3 >= 10))
		{
			num_1++;
			num_2 = num_1 + 1;
			num_3 = num_2 + 1;
		}
		if (num_1 == 8)
		break;
		if (num_1 != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
