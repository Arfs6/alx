#include "main.h"

/**
 * jack_bauer - print all the minutes of the day of jack bauer
 *
 * Return: 0
*/
void jack_bauer(void)
{
	short int l_hrs = 0;
	short int r_hrs = 0;
	short int l_min;
	 short int r_min;
	short int j;
	short int i = 0;

	while (i < 24)
	{
		j = 0;
		l_min = 0;
		r_min = 0;
		while (j < 60)
		{
			_putchar(l_hrs + '0');
			_putchar(r_hrs + '0');
			_putchar(':');
			_putchar(l_min + '0');
			_putchar(r_min + '0');
			_putchar('\n');
			r_min++;
			if (r_min >= 10)
			{
				l_min++;
				r_min = 0;
			}
			j++;
		}
		r_hrs++;
		if (r_hrs >= 10)
		{
			l_hrs++;
			r_hrs = 0;
		}
		i++;
	}
}
