#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - check for this function
 * @d: check for this parameter
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
