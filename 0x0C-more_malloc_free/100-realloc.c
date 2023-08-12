#include "main.h"
#include <stdlib.h>

/**
* *_realloc - check for this function
* @ptr: check for this paramet
* @old_size: check for this parameter
* @new_size: check for this parameter
* Return: void
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p, *p2;
	unsigned int index;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
		return (malloc(new_size));
	p = malloc(new_size);
	if (!p)
		return (NULL);
	p2 = ptr;
	if (new_size < old_size)
	{
		for (index = 0; index < new_size; index++)
			p[index] = p2[index];
	}
	if (new_size > old_size)
	{
		for (index = 0; index < old_size; index++)
			p[index] = p2[index];
	}
	free(ptr);
	return (p);
}
