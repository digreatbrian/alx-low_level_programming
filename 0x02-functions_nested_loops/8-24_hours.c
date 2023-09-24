#include <stdio.h>

/**
 * jack_bauer - Executor
 *
 * Description: prints every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59.
 *
 * Return: Void
 */
void jack_bauer(void)
{
	int hour, minute;

	for (hour = 0; hour <= 23; hour++)
	{
		for (minute = 0; minute <= 59; minute++)
		{
			putchar((hour / 10) + '0');
			putchar((hour % 10) + '0');
			putchar(':');
			putchar((minute / 10) + '0');
			putchar((minute % 10) + '0');
			putchar('\n');
		}
	}
}
