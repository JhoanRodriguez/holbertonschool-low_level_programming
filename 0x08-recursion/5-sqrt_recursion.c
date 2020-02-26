#include "holberton.h"
int _pow_recursion_f(int x, int y);
/**
 * _sqrt_recursion - return the natural square root of a number
 * @n: int number
 * Return: If no natural square root, return -1. Else return natural
 * square root
 */

int _sqrt_recursion(int n)
{
	return (_pow_recursion_f(n, 1));
}
/**
 * _pow_recursion_f - return the value of `x` raised to power of `y`
 * @x: number value
 * @y: number power
 * Return: x to power of y
 */

int _pow_recursion_f(int x, int y)
{
	if (y * y > x)
	{
		return (-1);
	}
	else if (y * y < x)
	{
		return (_pow_recursion_f(x, (y + 1)));
	}
	else
	{
		return (y);
	}
}
