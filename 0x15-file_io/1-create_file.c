#include "main.h"

/**
 * create_file - check for this function
 * @filename: check for this parameter
 * @text_content: check for this parameter
 * Return: int
 */
int create_file(const char *filename, char *text_content)
{
	int r_open, in, l;

	l = 0;
	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (l = 0; text_content[l];)
			l++;
	}
	r_open = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	in = write(r_open, text_content, l);

	if (r_open == -1 || in == -1)
		return (-1);
	close(r_open);
	return (1);
}

