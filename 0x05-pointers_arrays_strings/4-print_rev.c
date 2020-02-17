#include "holberton.h"
/**
 * print_rev - Print the last digit
 * @s: Number that is going to be splited
 * Return: Return the last digit
 */
void print_rev(char *s)
{
	int c = 0;

	while (s[c] != '\0')
	{
		c++;
	}

	while (s[c - 1] != '\0')
	{
		_putchar (s[c]);
		c--;
	}
	_putchar ('\n');
}
