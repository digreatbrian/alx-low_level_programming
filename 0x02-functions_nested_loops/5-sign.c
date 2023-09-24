#include "main.h"

/**
 * print_sign - Executor
 *
 * Description: Prints sign of a number
 *
 * @n: Arg 1
 * Return: 1 (n > 0) 0 (n = 0) -1 (n < 0)
 */
int print_sign(int n)
{
	if (n == 0)
	{
		_putchar('0' + n);
		return (0);
	}
	else if (n > 0)
	{
		_putchar('+');
		return (+1);
	}
	_putchar('-');
	return (-1);
}
