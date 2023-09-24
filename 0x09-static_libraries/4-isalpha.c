#include <stdio.h>
#include <ctype.h>

/**
 * _isalpha - Executor
 *
 * Description: Checks if c is alphabetic char
 *
 * @c:Arg 1
 * Return:  1 (True) 0 (False)
 */
int _isalpha(int c)
{
	if (isalpha(c) > 0)
	{
		/* Its a lowercase alphabet */
		return (1);
	}
	return (0);
}
