#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_char - print char type element from va_list
 * @list: va_list passed to function
 */
void print_char(va_list list)
{
	printf("%c, ", va_arg(list, int));
}
/**
 * print_int - print int type element from va_list
 * @list: va_list passed to function
 */
void print_int(va_list list)
{
	printf("%d, ", va_arg(list, int));
}
/**
 * print_float - print float type element from va_list
 * @list: va_list passed to function
 */
void print_float(va_list list)
{
	printf("%f, ", va_arg(list, double));
}
/**
 * print_string - print string type element from va_list
 * @list: va_list passed to function
 */
void print_string(va_list list)
{
	char *x;

	x = va_arg(list, char *);
	if (x != '\0')
		printf("%s", x);
	else
		printf("(nil)");
}
/**
 * print_all - print all type element from va_list
 * @format: va_list passed to function
 */
void print_all(const char * const format, ...)
{
	int x = 0, y = 0;

	va_list list;

	datatype ptr[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};
	va_start(list, format);

	while (format != NULL && *(format + y) != '\0')
	{
		while (x < 4)
		{
			if (ptr[x].type[0] == format[y])
			{
				ptr[x].f(list);
			}
			x++;
		}
		y++, x = 0;
	}
	va_end(list);
	printf("\n");
}
