#include "main.h"

/**
 * *_strcat - This function add two strings together
 * @dest: check for this parameter
 * @src: check for this parameter
 * Return: char
 */
char *_strcat(char *dest, char *src)
{
	char *main_dest = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (main_dest);
}
