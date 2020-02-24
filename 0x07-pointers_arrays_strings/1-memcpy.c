#include "holberton.h"

/**
 * _memcpy - copy memory area
 * @dest: char array to copy into
 * @src: char array to copy from
 * @n: number of elements to copy
 * Return: pointer to `dest`
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; dest != '\0'; x++)
	{
		if (x < n)
		{
			dest[x] = src[x];
		}
		else
		{
			break;
		}
	}
	return (dest);
}
