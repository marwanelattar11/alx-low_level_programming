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
	char x = 'a';

	while (x <= 'z')
	{
		putchar("%c", x);
		x++;
	}
	return (0);
}
