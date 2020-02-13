#include "holberton.h"
/**
 * print_line - Print the last digit
 * @x: Number that is going to be splited
 * Return: Return the last digit
 */
void print_line(int x)
{
	int y;

	{
		for (y = 0; y <= x; y++)
		{
			if (x > 0)
			_putchar ('_');
		}
	}
	_putchar ('\n');
}
