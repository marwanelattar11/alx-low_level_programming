#include <stdio.h>

/**
 * main - entery point
 *
 * Description: a
 *
 * Return: always 0 (success)
 *
*/

int main(void)
{
	int i;
	int j;

	for (i = 0; i < 9; i++)
	{
		for (j = 1; j <= 9; j++)
		{
			if (i < j)
			{
				putchar (48 + i);
				putchar (48 + j);
				if (i != 8)
					putchar (',');
				putchar (' ');
			}
		}
	}
	putchar ('\n');

	return (0);
}
