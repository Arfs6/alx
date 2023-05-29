#include <stdio.h>

/**
 * main - initializing
 *
 * Return: always 0 (success)
*/
int main(void)
{
	int l_digit_1 = 0;
	int l_digit_2 = 0;
	int r_digit_1 = 0;
	int r_digit_2 = 1;
	int i = 1;

	while (i)
	{
		putchar(l_digit_1 % 10 + '0');
		putchar(l_digit_2 % 10 + '0');
		putchar(' ');
		putchar(r_digit_1 % 10 + '0');
		putchar(r_digit_2 % 10 + '0');
		r_digit_2++;
		if (r_digit_2 >= 10)
		{
			r_digit_1++;
			r_digit_2 = 0;
		}
			if (r_digit_1 >= 10)
		{
			if (l_digit_2 >= 9)
			{
				l_digit_1++;
				l_digit_2 = 0;
			}
			else
			l_digit_2++;
			r_digit_1 = l_digit_1;
			r_digit_2 = l_digit_2 + 1;
		}
		if ((l_digit_1 == 9) && (l_digit_2 == 9))
		break;
		else
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
