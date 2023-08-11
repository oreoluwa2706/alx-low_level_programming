#include "main.h"
#include <stdlib.h>

/**
 * *array_range - check for this function
 * @min: check for this parameter
 * @max: check for this parameter
 * Return: int
 */
int *array_range(int min, int max)
{
	int *cal;
	int index, b;

	b = 0;
	cal = malloc(sizeof(*cal) * ((max - min) + 1));
	if (min > max)
		return (NULL);
	if (cal == NULL)
		return (NULL);
	for (index = min; index <= max; index++)
	{
		cal[b] = index;
		b++;
	}
	return (cal);
}
