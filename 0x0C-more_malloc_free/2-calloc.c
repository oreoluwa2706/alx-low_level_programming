#include "main.h"
#include <stdlib.h>

/**
 * *meset - check for this function
 * @a: check for this parametr
 * @b: check for this parameter
 * @n: check for this parameter
 * Return: char
 */
char *meset(char *a, char b, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
	{
		a[index] = b;
	}
	return (a);
}
/**
 * *_calloc - check for this function
 * @nmemb: check for this parameter
 * @size: check for this parameter
 * Return: void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *cal;

	cal = malloc(size * nmemb);

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	if (cal == NULL)
	{
		return (NULL);
	}
	meset(cal, 0, nmemb * size);
	return (cal);
}
