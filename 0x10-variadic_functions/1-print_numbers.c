#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - entry
 * @separator: input
 * @n: input
 * @...: input
 * Return: void
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	unsigned int i = 0;

	va_start(ptr, n);
	if (!n)
	{
		printf("\n");
		return;
	}
	if (separator == NULL)
		separator = "";
	for (; i < n; i++)
	{
		printf("%d", va_arg(ptr, int));
		if (i != n - 1)
			printf("%s", separator);
		else
			printf("\n");
	}
	va_end(ptr);
}
