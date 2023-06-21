#include "main.h"
#include <stdio.h>

/**
 * main - entery point
 *
 * Description: a
 *
 * Return: 0
*/

int main(void)
{
	int i;
	long s1, s2, next;

	s1 = 0;
	s2 = 1;
	next = s1 + s2;
	printf("%d,%d,", s1, s2);
	for (i = 0; i < 50; i++)
	{
		printf("%d,", next);
		s1 = s2;
		s2 = next;
		next = s1 + s2;
	}
	return (0);
}
