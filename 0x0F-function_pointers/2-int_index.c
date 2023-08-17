#include "function_pointers.h"

/**
 * int_index - check for this function
 * @array: check for this parameter
 * @size: check for this parameter
 * @cmp: check for this parameter
 * Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || cmp == NULL)
	{
		if (size <= 0)
			return (-1);
	}
	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]))
		{
			return (index);
		}
	}
	return (-1);
}
