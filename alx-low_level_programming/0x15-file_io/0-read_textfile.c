#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include "main.h"

void clearMemory(char *mem, unsigned int size);

/**
 * read_textfile - read and print a text file
 * @filename: name of file
 * @letters: number of letters to print
 *
 * Return: number of letters printed
 * 0 if fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int ret = 0;
	int fn, temp;
	char *buffer;

	if (filename == NULL || letters == 0)
		return (0);

	fn = open(filename, O_RDONLY);
	if (fn == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters + 1));
	if (buffer == NULL)
	{
		close(fn);
		return (0);
	}
	clearMemory(buffer, letters + 1);
	temp = read(fn, buffer, letters);
	if (temp == -1)
	{
		close(fn);
		free(buffer);
		return (0);
	}

	ret = write(STDOUT_FILENO, buffer, temp);
	close(fn);
	free(buffer);
	if (ret != temp)
		return (0);

	return (ret);
}

/**
 * clearMemory - clear buffer memory
 * @mem: pointer to memory
 * @size: size of memory
 */
void clearMemory(char *mem, unsigned int size)
{
	unsigned int i = 0;

	for (i = 0; i < size; ++i)
		mem[i] = '\0';
}
