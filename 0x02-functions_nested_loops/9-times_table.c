#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * times_table - Show the multiplication tables
 * Return: Return nothing
 */
void times_table(void)
{
	int x;
	int y;
	for (x = 0;x <= 9;x++)
	{
		for (y = 0; y <= 9;y++)
		{
			if ((x * y) < 10)
			{
				if (y != 0)
				{
				_putchar (' ');
				}
				_putchar ((x * y)+ '0');
			}
			else 
			{
				_putchar (((x * y) / 10) + '0');
				_putchar (((x * y) % 10) + '0');
			}
			if ( y != 9)
			{
			_putchar (',');
			_putchar (' ');
			}
		}
		_putchar ('\n');
	}
}
