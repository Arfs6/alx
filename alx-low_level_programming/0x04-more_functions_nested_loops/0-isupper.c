#include "main.h"

/**
 * _isupper - Check if argument is upper
* @c: Character to check
*
* Return: 1 if upper
* if not upper 0
*/
int _isupper(int c)
{
	int ret;

	if ((c >= 65) && (c <= 90))
	ret = 1;
	else
	ret = 0;

	return (ret);
}
