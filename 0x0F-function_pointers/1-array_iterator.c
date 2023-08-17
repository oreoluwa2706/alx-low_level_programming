#include "function_pointers.h"

/**
 * array_iterator - check for this function
 * @array: check for this parameter
 * @size: check for this parameter
 * @action: check for this parameter
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t index;

	if (array == NULL || action == NULL)
	{
		return;
	}
	for (index = 0; index < size; index++)
	{
		action(array[index]);
	}
}
