#include "main.h"

/***/

int _strlen_recursion(char *s)
{
	static int sum = 0;

	if (*s != '\0')
	{
		sum += 1;
		_strlen_recursion(s + 1);
	}
	return (sum);
}
