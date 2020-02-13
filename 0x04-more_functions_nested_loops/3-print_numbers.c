#include "holberton.h"
/**
 * print_numbers - Print the last digit
 * Return: Return the last digit
 */
void print_numbers(void);
{
	int x;

	for (x = '0'; x <= '9'; x++)
	{
		_putchar (x);
	}
	_putchar ('\n');
}
