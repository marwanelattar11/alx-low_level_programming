#include "main.h"

/**
 * puts_half - entry
 * @str: input
*/

void puts_half(char *str)
{
	int len = 0, i;
	int n;

	while (str[len])
		len++;
	n = (len - 1) / 2;
	if (len % 2 == 0)
	{
		for (i = len / 2; i < len; i++)
			_putchar (str[i]);
	}
	else
	{
		for (i = n; i < len; i++)
			_putchar (str[i]);
	}
	_putchar ('\n');
}
