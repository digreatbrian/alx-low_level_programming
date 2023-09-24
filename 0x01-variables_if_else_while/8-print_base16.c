#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print all numbers in base 16
 *
 * Return: always 0 (success)
 */
int main(void)
{
	char a;
	int n;

	for (n = 0 ; n < 10 ; n++)
	{
		putchar('0' + n);
	}
	for (a = 'a' ; a <= 'f' ; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
