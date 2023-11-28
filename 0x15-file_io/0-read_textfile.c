#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - check for this function
 * @filename: check for this parameter
 * @letters: check for this parameter
 * Return: ssize_t
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t r_open, in, r;
		char *o;

	r_open = open(filename, O_RDONLY);
	if (r_open == -1)
		return (0);
	o = malloc(sizeof(char) * letters);
	r = read(r_open, o, letters);
	in = write(STDOUT_FILENO, o, r);

	free(o);
	close(r_open);
	return (in);
}
