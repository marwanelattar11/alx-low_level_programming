#include "main.h"
#include <stdlib.h>

/****/

int *array_range(int min, int max)
{
	int *ptr, i = 1;

	if (min > max)
		return (NULL);
	ptr = malloc ((max - min) * sizeof(int));
	if (!ptr)
		return (NULL);
	for (;i <= (max - min); i++)
		ptr[i] = i;
	
	return (ptr);
}
