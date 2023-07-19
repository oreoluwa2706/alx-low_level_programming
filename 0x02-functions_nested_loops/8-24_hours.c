#include "main.h"

/**
 * main - Entry point to print every minute of the day of
 * Jack Bauer, starting from 00:00 to 23:59
 * Return: Always 0 (Success)
 */
void jack_bauer(void)
{
	int hr;
	int mi;

	hr = 0;

	while (hr < 24)
	{
		mi = 0;
		while (mi < 60)
		{
			_putchar((hr / 10) + '0');
			_putchar((hr % 10) + '0');
			_putchar(':');
			_putchar((mi / 10) + '0');
			_putchar((mi % 10) + '0');
			_putchar('\n');
			mi++;
		}
		hr++;
	}
}
