#include "main.h"

/**
 * jack_bauer - Entry point to print every minute of the day
 * Return: void
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
