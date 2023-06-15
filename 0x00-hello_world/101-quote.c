#include <unistd.h>
#include <string.h>

/**
 * main - entery poinr
 *
 * Description: A C program using another library
 *
 * Return: 1 (not success)
 *
*/

int main(void)
{
	int size = strlen("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n");
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", size);
	return (1);
}
