#include "holberton.h"
/**
 * _islower - Print alphabet in lowercase 10 times
 * Return: 0
 * @c: char type letter
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
