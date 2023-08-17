#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - check for this function
 * @separator: check for this parameter
 * @n: check for this parameter
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *char_se, *p;
	unsigned int index;
	va_list point;

	if (separator == NULL || *separator == 0)
		char_se = "";
	else
		char_se = (char *) separator;
	va_start(point, n);

	if (n > 0)
		printf("%s", va_arg(point, char *));
	for (index = 1; index < n; index++)
	{
		p = va_arg(point, char*);
		if (p == NULL)
			p = "(nil)";
		printf("%s%s", char_se, p);
	}
	printf("\n");
	va_end(point);
}
