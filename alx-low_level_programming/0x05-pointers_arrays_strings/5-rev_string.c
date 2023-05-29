#include "main.h"
/**
* rev_string - reverses a string passed
* @s: str to reverse
* Return: reversed string
*/
void rev_string(char *s)
{
	char rev = s[0];
	int fcounter = 0;
	int i;

	while (s[fcounter])
	fcounter++;

	for (i = 0; i < fcounter; i++)
	{
		fcounter--;
	rev = s[i];
		s[i] = s[fcounter];
		s[fcounter] = rev;
	}
}
