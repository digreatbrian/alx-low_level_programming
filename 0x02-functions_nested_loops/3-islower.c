#include <ctype.h>
#include <stdio.h>

/**
 * _islower - Executor
 *
 * Description: Checks whether char islower
 *
 * @c: Arg 1
 * Return: 1 (True) 0 (False)
 */
int _islower(int c)
{
	if (islower(c) > 0)
	{
		/* Its a lowercase alphabet */
		return (1);
	}
	return (0);
}
