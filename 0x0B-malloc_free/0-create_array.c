#include "holberton.h"
#include <stdlib.h>

/**
 * create_array - create an array of chars, and initialize with specific char
 * @size: size of array
 * @c: specific char
 * Return: char pointer to malloc created memory address or NULL if error
 */

char *create_array(unsigned int size, char c)
{
	char *a = malloc(size * sizeof(char));
	unsigned int x;

	if (size == 0)
	{
		return (0);
	}
	for (x = 0; x < size; x++)
	{
		a[x] = c;
	}
	return (a);
}
