#include "main.h"

/**
 * prime1 - check for prime from 1 to n
 * @i: check for this parameter
 * @j: check for this parameter
 * Return: int
 */
int prime1(int i, int j)
{
	if (i == j)
		return (1);
	else if (i % j == 0)
		return (0);
	return (prime1(i, j + 1));
}
/**
 * is_prime_number - check for this function
 * @n: check for this parameter
 * Return: int
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime1(n, 2));
}

