#include "holberton.h"
/**
 * print_last_digit - Print the last digit
 * @x: Number that is going to be splited
 * Return: Return the last digit
 */
int print_last_digit(int x)
{
	int y;

	y = x % 10;

	if (y < 0)
		y = y * -1;
	_putchar (y + '0');
	return (y);
}
