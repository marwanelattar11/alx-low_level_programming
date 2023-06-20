#include "main.h"

/**
 * print_to_98 - entry
 * @n : input
*/

void print_to_98(int n)
{
	int i, j;

	if (n < 98)
	{
		for (i = n; i < 98; i++)
		{
			printf("%d, ", i);
		}
	}
	else
	{
		for (j = n; j > 98; j--)
		{
			printf("%d, ", j);
		}
	}
	printf("98\n");
}
