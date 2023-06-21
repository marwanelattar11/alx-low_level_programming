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

	if (n < 15 && n >= 0)
	{
		for (i = 0; i < (n + 1); i++)
		{
			printf("0");
			for (j = 1; j < (n + 1); j++)
			{
				m = i * j;
				printf(", ");
				if (m <= 9)
					printf("  %d", m);
				else if (m <= 99 && m > 9)
					printf(" %d", m);
				else
					printf("%d", m);
			}
			printf("\n");
		}
	}
}
