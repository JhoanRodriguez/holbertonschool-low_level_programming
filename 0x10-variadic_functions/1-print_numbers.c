#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - print each number with separator, followed by a newline
 * @separator: string to be printed between numbers
 * @n: number of args passed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int x;

	va_start(list, n);

	for (x = 0; x < n; x++)
	{
		printf("%d", (va_arg(list, int)));
		if ((separator != NULL) && (x < (n - 1)))
		{
		printf("%s", separator);
		}
	}
		printf("\n");
}
