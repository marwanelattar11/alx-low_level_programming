#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - Entry
 * @str: input
 * Return: ptr
*/

char *_strdup(char *str)
{
	int i = 0, size = 0;
	char *ptr;

	if (str == NULL)
		return (NULL);
	for (; str[size]; size++)
	;

	ptr = malloc(size * sizeof(*str) + 1);

	if (ptr != 0)
	{
		for (; i < size; i++)
			ptr[i] = str[i];
	}
	else
		return (NULL);
	return (ptr);
}
