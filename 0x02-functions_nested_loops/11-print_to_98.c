#include "main.h"

/**
 * print_to_98 - entry
 * @n : input
*/

void print_to_98(int n)
{
	int i, j;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			_putchar (i + '0');
			if (i != 98)
			{
				_putchar (',');
				_putchar (' ');
			}
		}
	}
	else
	{
		for (j = n; j >= 98; j--)
		{
			_putchar (j + '0');
			if (j != 98)
			{
				_putchar (',');
				_putchar (' ');
			}
		}
	}
}
