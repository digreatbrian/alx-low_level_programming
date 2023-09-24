#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints numbers separated by comma
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int nm;

	for (nm = 0 ; nm < 10 ; nm++)
	{
		if (nm > 0)
		{
			putchar(' ');
		}
		putchar('0' + nm);
		if (nm < 9)
		{
			putchar(',');
		}
	}
	putchar('\n');
	return (0);
}
