#include "holberton.h"
#include <stdio.h>
/**
 * print_triangle - Print the last digit
 * @size: Number that is going to be splited
 * Return: Return the last digit
 */
void print_triangle(int size)
{
	int x, y, z;

	if (size > 0)
	{
		for (x = 0; (x < size); x++)
		{
			for (y = 0; y < (size - x - 1); y++)
			{
				_putchar (' ');
			}
			for (z = 0; z <= x; z++)
			{
				_putchar ('#');
			}
			_putchar ('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
