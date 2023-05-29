#include <stdio.h>
#include "main.h"

/**
 * update_sign - update + or -
 * @sign: The current sign.
 * @n_sign: new sign
*/
void update_sign(char &sign, char n_sign)
{
	if (((sign == '-') && (n_sign == '-')) || ((sign == '+') && (n_sign == '+')))
	*sign = '+';
	else
	*sign = '-';
}



/**
 * _atoi - convert the string passed to int
 * @s: String to convert
 *
 * Return: converted int
*/
int _atoi(char *s)
{
;
}

int main(void)
{
char sign = '-';
update_sign(sign, '+');
printf("Expecting -, and got %c\n", sign);
update_sign(sign, '-');
printf("expecting +, and got %c\n", sign);
}
