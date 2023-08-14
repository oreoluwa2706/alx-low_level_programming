#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - check for this function
 * @d: check this parameter
 * @name: check for this parameter
 * @age: check for this parameter
 * @owner: check for this parameter
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
	else
		return;
}
