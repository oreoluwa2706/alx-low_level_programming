#include <stdio.h>

void race(void)__attribute__((constructor));

/**
 * race - check for this function
 * Return: void
 */
void race(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
