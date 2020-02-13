#include "holberton.h"
/**
 * print_diagonal - Print the last digit
 * @x: Number that is going to be splited
 * Return: Return the last digit
 */
void print_diagonal(int x)
{
	int y;

	{
		for (y = 0; y <= x; y++)
		{
			if (y > 0)
				_putchar ('92');
		}
	}
	_putchar ('\n');
}
