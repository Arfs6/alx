#include "3-calc.h"
/**
 * get_op_func - get proper operation function
 * @s: string of operation
 *
 * Return: proper function
*/
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (ops[i].op)/* stops when encounters NULL */
	{
		if ((ops[i].op)[0] == *s && !s[1])
		/* if *(s + 1) != '\0', invalid operator */
			return (*(ops + i)->f);
		i++;
	}

	return (NULL); /* no match */
}
