#include "main.h"
#include <stdio.h>

/**
 * print_times_table - entry
 *
 * @n: input
*/

void print_times_table(int n)
{
	int i, j, m;

	if (n < 15 && n > 0)
	{
		for (i = 1; i < (n + 1); i++)
		{
			printf("0");
			for (j = 1; j < (n + 1); j++)
			{
				p = i * j;
				printf(", ");
				if (p <= 9)
					printf("  %d", p);
				else if (p <= 99 && p > 9)
					printf(" %d", p);
				else
					printf("%d", p);
			}
		}
	}
}
