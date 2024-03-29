#include <stdio.h>
#include "function_pointers.h"

/****/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array && size && action)
		for (; i < size; i++)
		{
			action(array[i]);
		}
}
