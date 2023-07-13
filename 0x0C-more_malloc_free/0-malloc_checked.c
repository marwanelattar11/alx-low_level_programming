#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - entry
 * @b: input
 * Return: ptr
*/

void *malloc_checked(unsigned int b)
{
	int *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
