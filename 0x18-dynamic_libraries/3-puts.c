#include "holberton.h"
/**
 * _puts - Print the last digit
 * @str: Number that is going to be splited
 * Return: Return the last digit
 */
void _puts(char *str)
{
	int c = 0;

	while (str[c] != '\0')
	{
		_putchar (str[c]);
		c++;
	}
	_putchar ('\n');
}
