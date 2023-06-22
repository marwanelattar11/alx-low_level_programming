#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
 * _isupper - Entery
 *
 * @c: input
 *
 * Return: 1 if upper
*/

int _isupper(int c)
{
	if (isupper(c))
		return (1);
	else
		return (0);
}
