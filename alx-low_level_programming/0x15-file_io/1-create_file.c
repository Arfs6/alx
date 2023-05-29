#include <fcntl.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_file - create a file
 * @filename: name of file
 * @text_content: content to add to file
 *
 * Return: 1 successful
 * -1 if fails
 */
int create_file(const char *filename, char *text_content)
{
	int fn, len = 0;
	int ret = 0;

	if (filename == NULL)
		return (-1);

	for (len = 0; text_content && text_content[len]; len++)
		;

	fn = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fn == -1)
		return (-1);

	ret = write(fn, text_content, len);
	close(fn);
	if (ret != len)
		return (-1);

	return (1);
}
