#include "main.h"

/**
 * _strlen_recursion - Entry
 * @s: input
 * Return: sum;
*/

int _strlen_recursion(char *s)
{
	int sum = 0;

	if (*s != '\0')
	{
		sum += _strlen_recursion(s + 1) + 1;
	}
	return (sum);
}
