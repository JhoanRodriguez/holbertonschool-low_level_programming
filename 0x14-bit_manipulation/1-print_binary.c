#include "holberton.h"
/**
 * print_binary - print binary representation of a number
 * @n: decimal number to print as binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int x;

	if (n == 0)
	{
		_putchar ('0');
		return;
	}
	if (n == 1)
	{
		_putchar ('1');
		return;
	}

	print_binary(n >> 1);

	if (n & 1)
		x = 1;
	else
		x = 0;
	_putchar(x + '0');
}
