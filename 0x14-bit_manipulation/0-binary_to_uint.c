#include "holberton.h"
/**
 * binary_to_uint - convert a binary number to an unsigned int
 * @b: char string
 * Return: converted decimal number or 0 if there is an unconvertable char
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int total = 0;
	int x, len;

	for (len = 0; b[len] != '\0'; len++)
	{
		if (b[len] == '0' || b[len] == '1')
			continue;
		else
			return (0);
	}
	len--;

	for (x = 0; len >= 0; len--, x++)
	{
		total += (b[len] - '0') * (1 << x);
	}
	return (total);
}
