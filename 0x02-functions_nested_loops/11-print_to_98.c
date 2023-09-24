#include <stdio.h>

/**
 * print_to_98 - Executor
 *
 * Description: Print n up temacs o 98
 *
 * @n: Arg 1
 * Return: Always 0 (Success)
 */
void print_to_98(int n)
{
	int d = n;

	while (n != 98)
	{
		if (n != d)
		{
			printf(" %d,", n);
		}
		else
		{
			printf("%d,", n);
		}
		if (n < 98)
		{
			n = n + 1;
		}
		else
		{
			n = n - 1;
		}
	}
	if (d == 98)
	{
		printf("%d\n", 98);
	}
	else
		printf(" %d\n", 98);
}
