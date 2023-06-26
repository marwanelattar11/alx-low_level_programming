#include "main.h"

/**
 * print_rev - Entry
 * @s: input
*/

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	while (i--)  /**didnot work with while(i != 0)*/
	{
		_putchar (s[i]);
	}
	_putchar ('\n');
}
