#include "main.h"

/**
 * *_strstr - check for this function
 * @haystack: check for this parameter
 * @needle: check for this parameter
 * Return: char
 */
char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
	{
		return (haystack);
	}
	while (*haystack != '\0')
	{
		char *ha = haystack;
		char *ne = needle;

		while (*ne != '\0' && *ha == *ne)
		{
			ha++;
			ne++;
		}
		if (*ne == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
