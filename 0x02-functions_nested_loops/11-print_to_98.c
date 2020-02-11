#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - Print all natural numbers from n to 98
 * @n: int type number
 */
void print_to_98(int n)
{
	int x;

	if (n == 98)
	{
		printf("%d", n);
	}
	else if (n < 98)
	{
		for (x = n; x <= 98; x++)
		{
			printf("%d", x);
			if (x != 98)
			{
				_putchar (',');
				_putchar (' ');
			}
		}
	}
	else
	{
		for (x = n; x >= 98; x--)
		{
			printf("%d", x);
			if (x != 98)
			{
				_putchar (',');
				_putchar(' ');
			}
		}
	}
	_putchar ('\n');
}
