#include "main.h"

/**
 * puts_half - This function print half of the string
 * @str: check for this parameter
 * Return: void
 */
void puts_half(char *str)
{
	int i, n, leng;

	leng = 0;

	for (i = 0; str[i] != '\0'; i++)
		leng++;
	n = (leng / 2);
	if ((leng % 2) == 1)
		n = ((leng + 1) / 2);

	for (i = n; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}

