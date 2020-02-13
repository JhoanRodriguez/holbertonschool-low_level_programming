#include "holberton.h"
/**
 * print_square - Print the last digit
 * @zize: Number that is going to be splited
 * Return: Return the last digit
 */
void print_square(int size)
{
	int a, b;

	if (size <= 0)
		_putchar ('\n');
	else
	{
		for (a = 0; a < size; a++)
		{
			for (b = 0; b < size; b++)
			{
				_putchar ('#');
			}
			_putchar ('\n');
		}	
	}
}
