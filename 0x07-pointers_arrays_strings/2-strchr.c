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

	i = 0;
	while (s)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
		else
			i++;
	}
	return ('\0');
}
