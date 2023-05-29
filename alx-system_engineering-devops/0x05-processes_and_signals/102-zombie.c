#include <sys/types.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdio.h>

/**
 * infinite_while - an infinite while loop.
 * Return: 0
 */
int infinite_while(void)
{
	while (1)
	{
		sleep(1);

	}
	return (0);
}

/**
 * create_process - create a new zombie process.
 */
void create_process(void)
{
	pid_t my_pid;

	my_pid = fork();
	if (my_pid != 0)
	{
		printf("Zombie process created, PID: %i\n", my_pid);
		return;
	}
	exit(0);
}

/**
 * main - main entery of program
 * Return: 0
 */
int main(void)
{
	int i = 0;

	for (i = 0; i < 5; ++i)
		create_process();

	infinite_while();

	return (0);
}
