#include "holberton.h"
/**
 * print_number - Print the last digit
 *@n: Number that is going to be splited
 * Return: Return the last digit
 */
void print_number(int n)
{
	if (n < 0)
	{
		n = n * (-1);
		_putchar ('-');
	}
	while (n < 10)
	{
		_putchar (n + '0');
		break;
	}
	while (n > 9 && n < 100)
	{
		_putchar ((n / 10) + '0');
		_putchar ((n % 10) + '0');
		break;
	}
	while (n > 9 && n > 100 && n < 1000)
	{
		_putchar ((n / 100) + '0');
		_putchar ((n % 100) / 10 + '0');
		_putchar ((n % 100) % 10 + '0');
		break;

	}
	while (n > 9 && n > 100 && n > 1000)
	{
		_putchar ((n / 1000) + '0');
		_putchar ((n % 1000) / 100 + '0');
		_putchar (((n % 1000) % 100) / 10 + '0');
		_putchar (((n % 1000) % 100) % 10 + '0');
		break;
	}
}
