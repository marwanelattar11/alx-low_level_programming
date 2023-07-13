#include "main.h"
#include <stdlib.h>

/**
 * array_range - entry
 * @min: input
 * @max: input
 * Return: ptr
*/

int *array_range(int min, int max)
{
	int *ptr, i = 0, len;

	if (min > max)
		return (NULL);
	len = max - min + 1;
	ptr = malloc(len * sizeof(int));
	if (!ptr)
		return (NULL);
	for (; i < len; i++)
		ptr[i] = min++;
	return (ptr);
}
