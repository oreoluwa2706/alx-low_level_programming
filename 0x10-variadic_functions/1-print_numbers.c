#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - check for this function
 * @separator: check for this parameter
 * @n: check for this parameter
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int index;
	va_list point;
	char *char_;

	if (separator == NULL || *separator == 0)
		char_ = "";
	else
		char_ = (char *) separator;
	va_start(point, n);

	if (n > 0)
		printf("%d", va_arg(point, int));
	for (index = 1; index < n; index++)
		printf("%s%d", char_, va_arg(point, int));
	printf("\n");
	va_end(point);
}
