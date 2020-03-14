#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _printchar - print char type element from va_list
 * @list: va_list passed to function
 */
void print_char(va_list list)
{
	printf("%c, ", va_arg(list, int));
}
void print_int(va_list list)
{
	printf("%d, ", va_arg(list, int));
}
void print_float(va_list list)
{
	printf("%f, ", va_arg(list, double));
}
void print_string(va_list list)
{
	printf("%s, ", va_arg(list, char *));
}
void print_all(const char * const format, ...)
{
	int x = 0;

	va_list list;

	datatype ptr[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};
	va_start(list, format);

	while (x < 4)
	{
		if (ptr[x].type[0] == *format)
		{
			ptr[x].f(list);
		}
		x++;
	}
	va_end(list);
	printf("\n");
}
