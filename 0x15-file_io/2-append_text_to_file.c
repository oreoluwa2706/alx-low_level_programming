#include "main.h"

/**
 * append_text_to_file - check for this function
 * @filename: check for this parameter
 * @text_content: check for this parameter
 * Return: int
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int rd, w, l;

	l = 0;
	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (l = 0; text_content[l];)
			l++;
	}
	rd = open(filename, O_WRONLY | O_APPEND);
	w = write(rd, text_content, l);
	if (rd == -1 || w == -1)
		return (-1);
	close (rd);
	return (1);
}
