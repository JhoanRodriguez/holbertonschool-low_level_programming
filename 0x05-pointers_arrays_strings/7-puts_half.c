#include "holberton.h"

/**
 * puts_half - print second half of a string
 * @str: char array string type
 * Description: If odd number of chars, print (length - 1) / 2
 */
void puts_half(char *str)
{
	int c = 0;
	int l;
	
	while (str[c] != '\0')
	{
		c++;
	}
	c--;
	l = c;
	c = (l / 2) + 1;

	while (str[c] != '\0')
	{
		_putchar (str[c]);
		c++;
	}
	_putchar ('\n');
}
