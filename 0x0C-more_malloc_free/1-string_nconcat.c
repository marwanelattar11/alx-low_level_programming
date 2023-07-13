#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - entry
 * @s1: input
 * @s2: input
 * @n: input
 * Return: ptr
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	int len1 = 0, len2 = 0;
	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (; s1[len1] != '\0'; len1++)
	;
	for (; s2[len2] != '\0'; len2++)
	;
	ptr = malloc(len1 + 1 + n);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
	{
		ptr[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		ptr[i] = s2[j];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
