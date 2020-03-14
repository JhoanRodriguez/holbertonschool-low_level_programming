#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
/**
 * struct datatype - Struct datatype
 *
 * @datatype: The operator
 * @f: The function associated
 */
typedef struct data_type
{
	char *type;
	void (*f)();
} datatype;
#endif
