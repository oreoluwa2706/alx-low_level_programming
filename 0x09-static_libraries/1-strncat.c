#include "main.h"

/**
 * *_strncat - concatenate two string and stop at n
 * @dest: check for this parameter
 * @src: check for this parameter
 * @n: check for this parameter
 * Return: char
 */
char *_strncat(char *dest, char *src, int n)
{
	char *main_dest = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (n > 0 && *src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	*dest = '\0';
	return (main_dest);
}
