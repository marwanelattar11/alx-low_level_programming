#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - entry
 * @name: input
 * @f: input
*/
void print_name(char *name, void (*f)(char *))
{
	if (f && name)
		f(name);
}
