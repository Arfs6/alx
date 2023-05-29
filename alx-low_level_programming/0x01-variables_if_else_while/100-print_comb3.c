/* A program to print all possible diffrent combination of two digits. */
#include <stdio.h>

/**
 * main - initializing
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	int l_num = 0;
	int r_num = 1;

	while ((l_num <= 10) && (r_num <= 9))
	{
		putchar(l_num % 10 + '0');
		putchar(r_num % 10 + '0');
		r_num++;
		if (r_num == 10)
		{
			r_num = 0;
			l_num++;
			r_num = l_num + 1;
		}
		if ((l_num <= 10) && (r_num <= 9))
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
