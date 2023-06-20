#include "main.h"

/**
 * times_table - entery
*/

void times_table(void)
{
	int r, c;

	for (c = 0; c <= 9; c++)
	{
		for (r = 0; r <= 9; r++)
		{
			_putchar ((r * c) + '0');
			if (r != 9)
			{
				_putchar (',');
				_putchar (' ');
			}
		}
		_putchar ('\n');
	}
}
