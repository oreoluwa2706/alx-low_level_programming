#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * creates_buffer - Each buffer contains 1024 bytes
 * @file: check for this parameter
 * Return: Pointing to a new buffer
 */
char *creates_buffer(char *file)
{
	char *buf;

	buf = malloc(sizeof(char) * 1024);

	if (buf == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buf);
}

/**
 * close_file - This function close file descriptor
 * @fd: parameter of file descriptor to be closed
 */
void close_file(int fd)
{
	int q;

       	q = close(fd);

	if (q == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Copy content from one file to another.
 * @argc: check for this parameter.
 * @argv: check for this parameter.
 * Return: 0 on success.
 * Description: If the argument count is incorrect - exit code 97.
 * If file_from does not exist or cannot be read - exit code 98.
 * If file_to cannot be created or written to - exit code 99.
 * If file_to or file_from cannot be closed - exit code 100.

 */
int main(int argc, char *argv[])
{
	int point_a, point_b, rd, wr;
	char *buf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buf = create_buffer(argv[2]);
	point_a = open(argv[1], O_RDONLY);
	rd = read(point_a, buf, 1024);
	point_b = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (point_a == -1 || rd == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buf);
			exit(98);
		}

		wr = write(point_b, buf, rd);
		if (point_b == -1 || wr == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buf);
			exit(99);
		}

		rd = read(point_a, buf, 1024);
		point_b = open(argv[2], O_WRONLY | O_APPEND);

	} while (rd > 0);

	free(buf);
	close_file(point_a);
	close_file(point_b);

	return (0);
}


