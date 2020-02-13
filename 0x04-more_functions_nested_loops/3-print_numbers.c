#include "holberton.h"
/**
 * print_numbers - Print the last digit
 * @x: Number that is going to be splited
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
