#include "holberton.h"
/**
 * _isalpha - Print alphabet in lowercase 10 times
 * Return: 0
 * @c: char type letter
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
