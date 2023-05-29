#include <stdio.h>

void myStartupFunc(void) __attribute__((constructor));
/**
 * myStartupFunc - function to run before main
*/
void myStartupFunc(void)
{
	printf("You're beat! and yet, you must allow,\n"
		"I bore my house upon my back!\n");
}
