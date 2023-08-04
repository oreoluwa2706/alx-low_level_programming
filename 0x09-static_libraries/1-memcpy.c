#include "main.h"

/**
 * *_memcpy - This function copy from source to dest
 * @dest: check for this parameter
 * @src: check for this parametere
 * @n: check for this parameter
 * Return: char
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
