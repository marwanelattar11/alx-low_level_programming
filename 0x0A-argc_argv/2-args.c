#include <stdlib.h>
#include <stdio.h>

/**
 * main - entry
 * @argc: input
 * @argv: input
 * Return: 0
*/

int main(int argc, char *argv[])
{
	int i;

	i = 0;
	while (argc--)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
