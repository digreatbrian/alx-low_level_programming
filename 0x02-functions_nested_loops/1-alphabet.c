#include <stdio.h>

/**
 * print_alphabet - Executor
 *
 * Description: Prints alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char ap;

	for (ap = 'a'; ap <= 'z'; ap++)
	{
		putchar(ap);
	}
	putchar('\n');
}
