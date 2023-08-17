#include "function_pointers.h"

/**
 * print_name - check this function
 * @name: check for this parameter
 * @f: check for this parameter
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	(*f)(name);
}

