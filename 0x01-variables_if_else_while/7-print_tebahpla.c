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
	char x = 'z';

	while (x >= 'a')
	{
		putchar(x);
		x--;
	}
	putchar('\n');
	return (0);
}
