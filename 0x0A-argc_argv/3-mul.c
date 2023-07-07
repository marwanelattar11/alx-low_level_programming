#include <stdlib.h>
#include <stdio.h>

/**
 * main - entry
 * @argc: input
 * @argv: a
 * Return: 0
*/

int main(int argc, char *argv[] __attribute__((unused)))
{
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
