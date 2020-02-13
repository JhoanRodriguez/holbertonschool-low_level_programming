#include "holberton.h"
/**
 * _isdigit - Print the last digit
 * @x: Number that is going to be splited
 * Return: Return the last digit
 */
int _isdigit(int x)
{
	if (x >= 48 && x <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
