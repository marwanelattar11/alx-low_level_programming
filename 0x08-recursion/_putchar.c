#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the char
 * @c: the char to print
 * Return: on success 1
*/

int _putchar(char c)
{
        return (write(1, &c ,1));
}
