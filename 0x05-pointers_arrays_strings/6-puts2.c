#include "main.h"

/**
 * puts2 - entry
 * @str : input
*/

void puts2(char *str)
{
	int i = 0, len = 0;

	while (str[len])
		len++;
	for (i = 0; i < len; i += 2)
	{
		_putchar (str[i]);
	}
	_putchar ('\n');
}
