#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - This functio concat two string
 * @s1: check for this parameter
 * @s2: check for this parameter
 * @n: check for this parameter
 * Return: char
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *con_s1_s2;
	unsigned int len1, len2, i, j;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;
	con_s1_s2 = malloc(sizeof(char) * (len1 + n + 1));
	if (!con_s1_s2)
		return (NULL);
	if (n >= len2 && s2[j] != '\0')
		return (s2[j]);
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (s1[i] != '\0' && s2[j] != '\0')
	{
		for (i = 0; i < n && s1[i] != '\0'; i++)
		{
			con_s1_s2[i] = s1[i];
		}
		for (j = 0; j < n && s2[j] != '\0'; j++)
		{
			con_s1_s2[len1 + i] = s2[j];
		}
		con_s1_s2[len1 + i] += '\0';
	}
	return (con_s1_s2);
}
