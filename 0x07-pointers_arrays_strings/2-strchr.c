#include "main.h"

/**
 * _strchr - entry
 * @s: input
 * @c: input
 * Return: s
*/

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0, str[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}
