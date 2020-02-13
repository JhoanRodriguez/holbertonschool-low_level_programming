#include "holberton.h"
/**
 * print_most_numbers - Print the last digit
 * Number that is going to be splited
 * Return: Return the last digit
 */
void print_most_numbers(void);
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		if (x != 2 && x != 4)
		{
			_putchar(x + '0');
		}
	}
	_putchar ('\n');
}
