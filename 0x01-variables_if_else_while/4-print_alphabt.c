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
		if (x == 'e' || x == 'q')
		{
			x++;
			continue;
		}
		else
		{
			putchar(x);
			x++;
		}
	}
	putchar('\n');
	return (0);
}
