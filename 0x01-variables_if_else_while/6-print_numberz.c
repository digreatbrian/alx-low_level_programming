#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print numbers using putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	for (int i = 0 ; i < 10 ; i++)
	{
		putchar('0' + i);
	}
	putchar('\n');
	return (0);
}
