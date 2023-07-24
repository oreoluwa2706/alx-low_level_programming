#include "main.h"

/**
 * puts2 - print every other character of a string
 * @str: check for this parameter
 * Return: void
 */
void puts2(char *str)
{
	int leng, i;

	leng = 0;

	while (str[leng] != '\0')
	{
		leng++;
	}

	for (i = 0; i < leng; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
