#include "holberton.h"

/**
 * _calloc - allocates memory for an array given number of elements and size
 * @nmemb: number of elements
 * @size: size of each element
 * Return: Null if error, else pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *p, x;

	if (size == 0 || nmemb == 0)
	{
		return (0);
	}
	p = malloc(nmemb * size);
	if (p == NULL)
	{
		return (0);
	}
	for (x = 0; x < nmemb; x++)
	{
		p[x] = 0;
	}
	return (p);
}
