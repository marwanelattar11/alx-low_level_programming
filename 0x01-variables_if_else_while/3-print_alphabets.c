#include <stdio.h>

/**
 * main - entery point
 *
 * Description: alphabet loop
 *
 * Return: always 0 (success)
 *
*/

int main(void)
{
	char x = 'a', y = 'A';

	while (x <= 'z')
	{
		putchar(x);
		x++;
	}
	while (y <= 'Z')
	{
		putchar(y);
		y++;
	}
	putchar('\n');
	return (0);
}
