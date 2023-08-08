#include "main.h"
#include <stdlib.h>

/**
 * *create_array -check for this function
 * @size: check for this parameter
 * @c: check for this parameter
 * Return: char
 */
char *create_array(unsigned int size, char c)
{
	char *array1 = NULL;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	if (size != 0)
	{
		array1 = (char *)malloc(size * sizeof(char));

		if (array1 != NULL)
		{
			for (i = 0; i < size; i++)
			{
				array1[i] = c;
			}
		}
	}
	return (array1);
}
