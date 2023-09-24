#include <stdio.h>

/**
 * print_alphabet_x10 - Executor
 *
 * Description: Prints alphabet 10x
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	char ap;
	int i;

	for (i = 0 ; i < 10 ; i++)
	{
		for (ap = 'a'; ap <= 'z'; ap++)
		{
		putchar(ap);
		}
		if (i < 9)
		{
			putchar('\n');
		}
	}
	putchar('\n');
}

