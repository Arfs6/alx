#include "main.h"

/**
 * reverse_array - Reverse the array
 * @a: array to reverse
 *@n: number of elements to reverse
*/
void reverse_array(int *a, int n)
{
	int cur, stop, i;

	if (n % 2)
	/* odd number, stop 1 element before the center element. */
	stop = (n - 1) / 2;
	else
	/* even number, stop at the middle element. */
	stop = n / 2;
	i = 0; /* first element */
	n = n - 1; /* last element */
	while (n > 1)
	{
		cur = a[n];
		a[n] = a[i];
		a[i] = cur;
		i++;
		n--;
		if (i == stop)
		break;
	}
}
