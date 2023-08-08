#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - check for this function
 * @ac: check for this parameter
 * @av: check for this parameter
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int i, n, j, l;
	char *pt_str;

	j = 0;
	l = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
			l++;
	}
	i += ac;
	pt_str = malloc(sizeof(char) * l + 1);
	if (pt_str == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
		{
			pt_str[j] = av[i][n];
			j++;
		}
		if (pt_str[j] == '\0')
		{
			pt_str[j++] = '\n';
		}

	}
	return (pt_str);

}

