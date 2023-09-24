#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Printing a-z except q and e
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ap = 'a';

	while (ap <= 'z')
	{
		putchar(ap);
		ap++;
	}
	putchar('\n');
	return (0);
}
