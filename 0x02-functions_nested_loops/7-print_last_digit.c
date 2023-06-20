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
	if (n < 0)
		return ((n % 10) * -1);
	else
		return (n % 10);
}
