#include"3-calc.h"
/**
 * get_op_func - function
 * @s: parameter
 * Return: int
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int index;

	index = 0;
	while (index < 5)
	{
		if (strcmp(s, ops[index].op) == 0)
		{
			return (*(ops[index]).f);
		}
		index++;
	}
	return (NULL);
}
