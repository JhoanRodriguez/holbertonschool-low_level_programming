#include "holberton.h"
/**
 * _memset - Fills memory with a constant byte
 * @s: buffer array
 * @b: constant byte
 * @n: number of bytes of memory area to fill
 * Description: Fill the first `n` bytes of the memory area pointed to by `s`
 * with the constant byte `b`.
 * Return: Pointer to memory area `s`
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; s != '\0'; x++)
	{
		if (x < n)
		{
			s[x] = b;
		}
		else
		{
			break;
		}
	}
	return (s);
}
