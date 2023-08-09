#include <stdlib.h>
#include "main.h"

/**
 * lenght_check - check for this function)
 * @str: check for this parameter
 * Return: int
 */
int lenght_check(char *str)
{
	int i, j, k;

	i = 0;
	k = 0;
	for (j = 0; str[j] != '\0'; j++)
	{
		if (str[j] == ' ')
			i = 0;
		else if (i == 0)
		{
			i = 1;
			k++;
		}
	}
	return (k);
}
/**
 * **strtow - check for this function
 * @str: check for this parameter
 * Return: char
 */
char **strtow(char *str)
{
	char **pt, *tmp;
	int i, a, len, count, c, start, end;

	a = 0;
	len = 0;
	c = 0;
	while (*(str + len))
		len++;
	count = lenght_check(str);
	if (count == 0)
		return (NULL);
	pt = (char **) malloc(sizeof(char *) * (count + 1));
	if (pt == NULL)
		return (NULL);
	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				tmp = (char *)malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				pt[a] = tmp - c;
				a++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}
	pt[a] = NULL;
	return (pt);
}
