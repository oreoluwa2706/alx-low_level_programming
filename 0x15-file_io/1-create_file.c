#include "main.h"

/**
 * create_file - check for this function
 * @filename: check for this parameter
 * @text_content: check for this parameter
 * Return: int
 */
int create_file(const char *filename, char *text_content)
{
	int rd_open, inp, l;

	l = 0;
	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (l = 0; text_content[l];)
			l++;
	}
	rd_open = open(filename, O_CREAT | O_RDWR |  O_TRUNC, 0600);
	inp = write(rd_open, text_content, l);

	if (rd_open == -1 || inp == -1)
		return (-1);
	close(rd_open);
	return (1);
}
