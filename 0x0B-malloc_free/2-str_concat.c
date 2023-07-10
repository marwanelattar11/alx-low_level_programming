#include "main.h"
#include <stdlib.h>

/**
 *_strlen - entry
 * @s: input
 * Return: size
*/

int _strlen(char *s)
{
	int size = 0;

	for (; s[size] != '\0'; size++)
	;
	return (size);
}
/**
 * str_concat - entry
 * @s1: input
 * @s2: input
 * Return: ptr
*/
char *str_concat(char *s1, char *s2)
{
	int i, size1, size2;
	char *ptr;

	if (s1 == NULL)
		s1 = '\0';
	if (s2 == NULL)
		s2 = '\0';

	size1 = _strlen(s1);
	size2 = _strlen(s2);
	ptr = malloc((size1 + size2) * sizeof(char) + 1);

	if (ptr == 0)
		return (0);
	for (i = 0; i < size1 + size2; i++)
	{
		if (i < size1)
			ptr[i] = s1[i];
		else
			ptr[i] = s2[i - size1];
	}
	ptr[i] = '\0';
	return (ptr);
}
