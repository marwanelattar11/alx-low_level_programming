#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - entry
 * @separator: input
 * @n: input
 * @...: input
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	unsigned int i = 0;
	char *str;

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
		str = va_arg(ptr, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (i != n - 1)
			printf("%s", separator);
		else
			printf("\n");
	}
	va_end(ptr);
}
