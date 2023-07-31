#include "main.h"
#define MAX_STRING 100

/**
 * set_string - check for this function
 * @s: check for this parameter
 * @to: check for this praameter
 */
void set_string(char **s, char *to)
{
	static char buffer[MAX_STRING];
	int i;

	for (i = 0; i < MAX_STRING - 1 && to[i] != '\0'; i++)
	{
		buffer[i] = to[i];
	}
	buffer[i] = '\0';
	*s = buffer;
}
