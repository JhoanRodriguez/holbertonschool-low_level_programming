#include "holberton.h"
/**
 * print_diagonal - Print the last digit
 * @x: Number that is going to be splited
 * Return: Return the last digit
 */
void print_diagonal(int x)
{
	int y, z;

	for (y = 0; y < x; y++)
	{
		if (x > 0)
		{
			for (z = 0 ; z < y; z++)
			{
				_putchar (' ');
			}
			_putchar (92);
			_putchar ('\n');
		}
	}
	if (x <= 0)
	_putchar ('\n');
}
