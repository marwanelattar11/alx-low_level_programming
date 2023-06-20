#include "main.h"

/**
 * print_last_digit - entery
 *
 * @n: a
 *
 * Return: 0
*/

int print_last_digit(int n)
{
	int last;

	if (n < 0)
		last = -1 * (n % 10);
	else
		last = n % 10;

		return (last);
}
