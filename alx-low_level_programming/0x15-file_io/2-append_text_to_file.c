#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"

/**
 * append_text_to_file - append text to a file
 * @filename: name of file
 * @text_content: string to append to text
 *
 * Return: 1 success
 * -1 fail
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fn, ret, len = 0;

	if (filename == NULL)
		return (-1);
	else if (text_content == NULL)
		return (1);

	for (len = 0; text_content[len]; ++len)
		;

	fn = open(filename, O_WRONLY | O_APPEND);
	if (fn == -1)
		return (-1);

	ret = write(fn, text_content, len);
	close(fn);
	if (ret != len)
		return (-1);

	return (1);
}
