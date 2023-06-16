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
	int x = 48;

	while (x <= 102)
	{
		putchar(x);
		if (x == 57)
			x += 39;
		x++;
	}
	putchar('\n');
	return (0);
}
