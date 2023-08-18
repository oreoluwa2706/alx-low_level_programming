#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - check for this function
 * @seperator: check for this parameter
 * @n: check for this parameter
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int index;
	va_list point;
	unsigned int print_num;

	va_start(point, n);
	print_num = va_arg(point, int);
	va_start(point, n);

	if (separator == NULL)
	{
		printf("%d", print_num);
	}
	if (separator && n)
	{
		for (index = 0; index < n; index++)
		{
			print_num = va_arg(point, int);
			printf("%d%s", print_num, separator);
		}
	}
	va_end(point);
	printf("\n");
}
