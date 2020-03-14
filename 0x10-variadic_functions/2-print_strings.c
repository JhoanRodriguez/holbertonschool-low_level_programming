#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - print a string followed by a newline
 * @separator: string to be printed between strings
 * @n: number of strings passed to function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int x;
	char *ptr;

	va_start(list, n);

	for (x = 0; x < n; x++)
	{
		ptr = va_arg(list, char *);

		(ptr != NULL) ? (printf("%s", ptr)) : (printf("(nil)"));

		if (x != (n - 1) && separator != NULL)
			printf("%s", separator);

	}
	printf("\n");
	va_end(list);

}
