#include "holberton.h"
/**
 * print_alphabet - Print alphabet in lowercase using only `_putchar`
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int x;
	int a;
	for (a = 0 ; a < 10; a++)
	{
		for (x = 'a'; x <= 'z'; x++)
		{
			_putchar (x);
		}
		_putchar ('\n');
	}
}
