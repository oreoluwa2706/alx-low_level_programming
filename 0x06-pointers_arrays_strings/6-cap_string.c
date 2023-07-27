#include "main.h"

/**
 * *cap_string - This function capitalize first word of each letter
 * @n: check for this parameter
 * Return: char
 */
char *cap_string(char *n)
{
	int ct, j;
	int asc_val[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	ct = 0;
	while (*(n + ct) != '\0')
	{
		if (*(n + ct) >= 'a' && *(n + ct) <= 'z')
		{
			if (ct == 0)
			{
				*(n + ct) = *(n + ct) - 32;
			}
			else
			{
				for (j = 0; j <= 12; j++)
				{
					if (asc_val[j] == *(n + ct - 1))
					{
						*(n + ct) = *(n + ct) - 32;
					}
				}
			}
		}
		ct++;
	}
	return (n);

}
