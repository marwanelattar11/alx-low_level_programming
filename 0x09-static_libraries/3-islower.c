#include "main.h"

/**
 * _islower - function to know if lowercase
 *
 * @c: checks input
 *
 * Return: 1 if 'c' is lower otherwise always 0 (Success)
*/

int _islower(int c)
{
	int i, flag;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (c == i)
		{
			flag = 1;
			break;
		}
		else
			flag = 0;
	}
	if (flag == 1)
		return (1);
	else
		return (0);
}
