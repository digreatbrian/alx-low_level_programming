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
	char apb = 'A';

	while (ap <= 'z')
	{
		putchar(ap);
		ap++;
	}
	while (apb <= 'Z')
	{
		putchar(apb);
		apb++;
	}
	putchar('\n');
	return (0);
}
