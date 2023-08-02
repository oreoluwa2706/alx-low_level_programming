#include "main.h"

/**
  * sqrt1 - check for this function
  * @i: check for this parameter
  * @j: check for this parameter
  * Return: int
  */
int sqrt1(int i, int j)
{
	if (j * j == i)
	{
		return (j);
	}
	else if (j * j > i)
	{
		return (-1);
	}
	return (sqrt1(i, j + 1));
}
/**
 * _sqrt_recursion - check for this function
 * @n: check for this parameter
 * Return: int
 */
int _sqrt_recursion(int n)
{
	return (sqrt1(n, 1));
}
