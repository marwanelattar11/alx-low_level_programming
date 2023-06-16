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

	while (x < 10)
	{
		putchar('0' + x);
		x++;
	}
	putchar('\n');
	return (0);
}
