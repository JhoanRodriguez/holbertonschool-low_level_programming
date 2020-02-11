#include "holberton.h"
/**
 * print_sign - Print alphabet in lowercase 10 times
 * Return: 0
 * @n: char type letter
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar ('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar ('-');
		return (-1);
	}
	else
	{
		_putchar ('0');
		return (0);
	}
}
