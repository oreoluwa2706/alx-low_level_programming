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
	ssize_t rd_open, inp, re;
	char *op;

	rd_open = open(filename, O_RDONLY);
	if (rd_open == -1)
		return (0);
	op = malloc(sizeof(char) * letters);
	re = read(rd_open, op, letters);
	inp = write(STDOUT_FILENO, op, re);

	free(op);
	close(rd_open);
	return (inp);
}
