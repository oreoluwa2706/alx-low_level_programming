#include "3-calc.h"
/**
 * op_add - check for this function
 * @a: check for this parameter
 * @b: check for this parameter
 * Return: addition
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - check for this function
 * @a: check for this parameter
 * @b: check for this parameter
 * Return: subtraction
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - check for this function
 * @a: check for this parameter
 * @b: check for this parameter
 * Return: multiplication
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - check for this function
 * @a: check for this parameter
 * @b: check for this parameter
 * Return: division
 */
int op_div(int a, int b)
{
	if (b != 0)
		return (a / b);
	printf("Error\n");
	exit(100);
}
/**
 * op_mod - check for this function
 * @a: check for this parameter
 * @b: check for this parameter
 * Return: return the result of the module.
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
