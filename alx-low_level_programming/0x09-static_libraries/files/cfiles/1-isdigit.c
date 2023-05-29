#include "main.h"

/**
 * _isdigit - Check if argument is upper
* @c: Character to check
*
* Return: 1 if upper
* if not upper 0
*/
int _isdigit(int c)
{
	int ret;

	if ((c >= 48) && (c <= 57))
	ret = 1;
	else
	ret = 0;

	return (ret);
}
