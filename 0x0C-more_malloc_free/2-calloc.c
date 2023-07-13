#include "main.h"
#include <stdlib.h>

/**
 * _calloc - entry
 * @nmemb: input
 * @size: input
 * Return: ptr
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(sizeof(int) * nmemb);

	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < nmemb; i++)
	{
		ptr[i] = 0;
	}

	return (ptr);
}
