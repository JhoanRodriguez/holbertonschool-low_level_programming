#include "holberton.h"
#include <stdio.h>
/**
 * _print_sign - Print alphabet in lowercase 10 times
 * Return: 0
 * @n: char type letter
 */
int print_last_digit(int x)
{
	if (x <= 0)
	{
		x = x * -1;	
	}
	return ( x % 10 + '0');
}
