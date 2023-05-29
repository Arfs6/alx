#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>

#define BUFFERSIZE 1024

int copy(int fromFn, int toFn);

/**
 * main - copy two files
 * @ac: arguments count
 * @av: argument vector
 *
 * Return: 0 successful
 * 97 invalid arguments
 * 98 can't access file to copy from
 * 99 can't write to file to be copied to
 * 100 can't close file
 */
int main(int ac, char **av)
{
	int fromFn, toFn;
	int ret;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fromFn = open(av[1], O_RDONLY);
	if (fromFn == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	toFn = open(av[2], O_WRONLY | O_TRUNC |	O_CREAT,
			S_IRUSR | S_IWUSR | S_IWGRP | S_IRGRP | S_IROTH);
	if (toFn == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}

	ret = copy(fromFn, toFn);
	if (ret == 98)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(99);
	}
	else if (ret == 99)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}

	ret = close(fromFn);
	if (ret == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fromFn);
		exit(100);
	}
	ret = close(toFn);
	if (ret == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", toFn);
		exit(100);
	}

	return (0);
}

/**
 * copy - copy content of fromFn to toFn
 * @fromFn: file descriptor of file to copy from
 * @toFn: file descriptor of file to copy to
 *
 * Return: 0 success
 * 98 coudn't read fromFn
 * 99 coudn't write to toFn
 */
int copy(int fromFn, int toFn)
{
	int ret_r, ret_w;
	char buffer[BUFFERSIZE];

	ret_r = ret_w = 0;
	do {
		ret_r = read(fromFn, buffer, BUFFERSIZE);
		if (ret_r == -1)
			return (98);
		ret_w = write(toFn, buffer, ret_r);
		if (ret_w != ret_r)
			return (99);
	} while (ret_r);

	return (0);
}
