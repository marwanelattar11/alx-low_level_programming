#include "main.h"

/**
 * _isalpha - function to check alphabet
 *
 * @c: checkss input
 *
 * Return: 1 if 'c' is alpha otherwise 0 always (success)
*/

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
