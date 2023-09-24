#include "main.h"

/**
 * print_last_digit - Executor
 *
 * Description: Returns last digit of a number
 * @n: Arg 1
 * Return: Last digit of a number
 */
int print_last_digit(int n)
{
	int a;

	if (n < 0)
	{
		n = -n;
	}
	a = n % 10;
	if (a < 0)
	{
		a = -a;
	}
	_putchar(a + '0');
	return (a);
}
