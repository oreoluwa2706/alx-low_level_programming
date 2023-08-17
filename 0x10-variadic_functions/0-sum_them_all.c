#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - check for this variadic function
 * @n: check for this parameter
 * Return: int
 */
int sum_them_all(const unsigned int n, ...)
{
	int summation = 0;
	unsigned int index;
	va_list point;

	if (n == 0)
		return (0);
	if (n != 0)
	{
		va_start(point, n);
		for (index = 0; index < n; index++)
			summation += va_arg(point, int);
	}
	va_end(point);
	return (summation);
}
