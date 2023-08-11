#include "main.h"
#include <stdlib.h>

/**
 * *_calloc - check for this function
 * @nmemb: check for this parameter
 * @size: check for this parameter
 * Return: void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *cal;
	unsigned int index;

	cal = malloc(nmemb * size);

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	if (cal == NULL)
	{
		return (NULL);
	}
	if (cal != NULL)
	{
		for (index = 0; index < (nmemb * size); index++)
			cal[index] = 0;
		return (cal);
	}
	else
		return (NULL);
}
