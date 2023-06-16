#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entery point
 *
 * Description: grater than or smaller than
 *
 * Return: always 0 (success)
*/

int main(void)
{
	int n, digit;

	digit = n % 10;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (digit > 5)
	{
		printf("is %d and is greater than 5\n", digit);
	}
	else if (digit == 0)
	{
		printf("is %d and is 0\n", digit);
	}
	else
	{
		printf("is %d and is less than 6 and not 0\n", digit);
	}
	return (0);
}
