#include "main.h"

/**
 * rev_string - Entry
 * @s: input
*/

void rev_string(char *s)
{
	int i, len = 0;
	int temp;

	while (s[len])
		len++;
	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = temp;
	}
}
