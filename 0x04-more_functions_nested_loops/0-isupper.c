#include "main.h"
#include <stdio.h>

/**
 *_isupper - checks for uppercase characters
 *@c: Variable text
 *Return 1 - when there is an upper character
 *Return 0: Always
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
