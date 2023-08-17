#include "3-calc.h"
/**
 * main - check for this function
 * @a: check for this parameters
 * @b: check for this parameter
 * Return: 0 in success
 */
int main(int a, char *b[])
{
	int aa, bb, ans;
	int (*i)(int, int);

	if (a < 4 || a > 4)
	{
		printf("Error\n");
		exit(98);
	}

	aa = atoi(b[1]);
	bb = atoi(b[3]);

	i = get_op_func(b[2]);

	if (i == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	ans = i(aa, bb);

	printf("%d\n", ans);
	return (0);
}
