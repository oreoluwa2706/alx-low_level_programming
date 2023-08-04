#include "main.h"

/**
 * *_strcpy - Function that copies string pointed to by src
 * @dest: check for this parameter
 * @src: check for this parameter
 * Return: char
 */
char *_strcpy(char *dest, char *src)
{
	int e = 0;
	int g = 0;

	while (*(src + e) != '\0')
	{
		e++;
	}
	for (; g < e; g++)
	{
		dest[g] = src[g];
	}
	dest[e] = '\0';
	return (dest);
}
