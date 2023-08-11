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
	void *temp;
	unsigned int i;

	if (ptr == NULL)
	{
		temp = malloc(new_size);
		return (temp);
	}
	else if (new_size == old_size)
		return (ptr);

	else if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	else
	{
		temp = malloc(new_size);
		if (temp != NULL)
		{
			for (i = 0; i < min(old_size, new_size); i++)
				*((char *)temp + i) = *((char *) ptr + i);
			free(ptr);
			return (temp);
		}
		else
			return (NULL);
	}
}
