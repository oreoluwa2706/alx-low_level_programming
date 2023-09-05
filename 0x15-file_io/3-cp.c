#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* main - check for this function
* @argc: check for this parameter
* @argv: check for this parameter
* Return: int
*/

int main(int argc, char *argv[])
{
int a, b;
int n1 = 1024, n2 = 0;
char c[1024];

if (argc != 3)
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
a = open(argv[1], O_RDONLY);
if (a == -1)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
	exit(98);
}
b = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR
	| S_IRGRP | S_IWGRP | S_IROTH);
if (b == -1)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
	close(a), exit(99);
}
while (n1 == 1024)
{
	n1 = read(a, c, 1024);
	if (n1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	n2 = write(b, c, n1);
	if (n2 < n1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
}

if (close(a) == -1)
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", a), exit(100);

if (close(b) == -1)
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", b), exit(100);

return (0);
}
