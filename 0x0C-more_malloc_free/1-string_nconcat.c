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
	char *s1_s2;
	unsigned int a, b, length1, length2;

	a = 0;
	b = 0;
	length1 = 0;
	length2 = 0;
	while (s1 && s1[length1])
		length1++;
	while (s2 && s2[length2])
		length2++;
	if (n < length2)
		s1_s2 = malloc(sizeof(char) * (length1 + n + 1));
	else
		s1_s2 = malloc(sizeof(char) * (length1 + length2 + 1));

	if (!s1_s2)
		return (NULL);
	while (a < length1)
	{
		s1_s2[a] = s1[a];
		a++;
	}
	while (n < length2 && a < (length1 + n))
	{
		s1_s2[a++] = s2[b++];
	}
	while (n >= length2 && a < (length1 + length2))
		s1_s2[a++] = s2[b++];
	s1_s2[a] = '\0';
	return (s1_s2);
}
