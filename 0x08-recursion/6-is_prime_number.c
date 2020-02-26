#include "holberton.h"
int prime_number(int n, int x);
/**
 * is_prime_number - determine if a number is a prime number
 * @n: int number
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
	return (prime_number(n, 2));
}
/**
 * prime_number - determine if a number is a prime number
 * @x: int number
 * @n: int number
 * Return: 1 if prime, 0 otherwise
 */

int prime_number(int n, int x)
{
	if (n < 2)
	{
		return (0);
	}
	else if (x < n)
	{
		if (n % x == 0)
		{
		return (0);
		}
		return (prime_number(n, x + 1));
	}
	return (1);
}
