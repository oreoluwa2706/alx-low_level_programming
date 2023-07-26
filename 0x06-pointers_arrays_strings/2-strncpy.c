#include "main.h"

/**
 * *_strncpy - the function copy a string to another string
 * @dest: check for this parameter
 * @src: check for tis parameter
 * @n: check for this parameter
 * Return: char
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}

