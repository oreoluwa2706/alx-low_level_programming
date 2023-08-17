#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - check for this function
 * @format: check for this parameter
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list point;
	int n, index;
	char *char_se = ", ";
	char *s;

	n = 0;
	index = 0;

	va_start(point, format);

	while (format && format[index])
		index++;

	while (format && format[n])
	{
		if (n  == (index - 1))
		{
			char_se = "";
		}
		switch (format[n])
		{
		case 'c':
			printf("%c%s", va_arg(point, int), char_se);
			break;
		case 'i':
			printf("%d%s", va_arg(point, int), char_se);
			break;
		case 'f':
			printf("%f%s", va_arg(point, double), char_se);
			break;
		case 's':
			s = va_arg(point, char *);
			if (s == NULL)
				s = "(nil)";
			printf("%s%s", s, char_se);
			break;
		}
		n++;
	}
	printf("\n");
	va_end(point);
}
