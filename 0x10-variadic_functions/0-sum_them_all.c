#include "variadic_functions.h"

/**
 * sum_them_all - return the sum of all its parameters
 * @n: number of extra params
 * Return: total sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int x, sum = 0;

	if (n == 0)
		return (0);

	va_start(list, n);

	for (x = 0; x < n; x++)
	{
		sum = sum + va_arg(list, int);
	}
	va_end(list);
	return (sum);
}
