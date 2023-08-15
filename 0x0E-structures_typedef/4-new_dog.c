#include "dog.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * *new_dog - check for this function
 * @name: check for this parameter
 * @age: check for this parameter
 * @owner: check for this parameter
 * Return: dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog = (dog_t *)malloc(sizeof(dog_t));

	if (newDog == NULL)
	{
		return (NULL);
	}
	newDog->name = (char *)malloc(strlen(name) + 1);
	newDog->owner = (char *)malloc(strlen(owner) + 1);

	if (newDog->name == NULL || newDog->owner == NULL)
	{
		return (NULL);
	}
	strcpy(newDog->name, name);
	strcpy(newDog->owner, owner);
	newDog->age = age;
	return (newDog);
}
