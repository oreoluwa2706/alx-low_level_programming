#include "main.h"

/**
 * _atoi - function that convert a string to integer
 * @s: check for this parameter
 * Return: The converted int
 */
int _atoi(char *s)
{
	int a, b, c, leng, d, e_int;

	a = 0;
	b = 0;
	c = 0;
	leng = 0;
	d = 0;
	e_int = 0;

	while (s[leng] != '\0')
		leng++;

	while (a < leng && d == 0)
	{
		if (s[a] == '-')
			++b;

		if (s[a] >= '0' && s[a] <= '9')
		{
			e_int = s[a] - '0';
			if (d % 2)
				e_int = -e_int;
			c = c * 10 + e_int;
			d = 1;
			if (s[a + 1] < '0' || s[a + 1] > '9')
				break;
			d = 0;
		}
		a++;
	}
	if (d == 0)
		return (0);
	return (c);
}
