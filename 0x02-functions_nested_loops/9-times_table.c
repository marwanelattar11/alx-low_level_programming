#include "main.h"

/**
 * times_table - entery
*/

void times_table(void)
{
	int r, c;

	for (c = 0; c <= 9; c++)
	{
		_putchar ('0');
		for (r = 0; r <= 9; r++)
		{
			_putchar (',');
			_putchar (' ');
			if ((r * c) <= 9)
				_putchar (' ');
			else
				_putchar (((r * c) / 10) + '0');
			_putchar (((r * c) % 10) + '0');
		}
		_putchar ('\n');
	}
}
