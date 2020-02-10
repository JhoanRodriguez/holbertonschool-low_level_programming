#include "holberton.h"
/**
 * _isaalpha - Print alphabet in lowercase 10 times
 * Return: 0
 * @c: char type letter
 */
int _isaalpha(int c)
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
