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
	int k;

	for (i = 0; i < 9; i++)
	{
		for (j = 1; j <= 9; j++)
		{
			for (k = 2; k <= 9; k++)
			if (i < j && j < k)
			{
				putchar (48 + i);
				putchar (48 + j);
				putchar (48 + k);
				if (i != 7)
				{
					putchar (',');
					putchar (' ');
				}
			}
		}
	}
	putchar ('\n');

	return (0);
}
