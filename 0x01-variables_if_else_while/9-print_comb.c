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
	int x = 0;

	while (x <= 9)
	{
		putchar(48 + x);
		if (x != 9)
		{
			putchar(',');
			putchar(' ');
		}
		x++;
	}
	putchar('\n');


	return (0);
}
