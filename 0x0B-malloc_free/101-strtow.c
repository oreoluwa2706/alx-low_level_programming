#include <stdlib.h>
#include "main.h"

/**
 * *count_word - check for this function)
 * @str: check for this parameter
 * Return: int
 */
int lenght_check(char *str)
{
	int flag, c, w;

	flag = 0;
	w = 0;
	for (c = 0; str[c] != '\0'; c++)
	{
		if (str[c] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			w++;
		}
	}
	return (w);
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
		if (str[i] == '\0')
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
