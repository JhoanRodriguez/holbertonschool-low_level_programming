#include "holberton.h"

/**
 * array_range - create an array of integers inclusive of min and max
 * @min: min value to include
 * @max: max value to include
 * Return: pointer to newly created array
 */

int *array_range(int min, int max)
{
	int *p, x;

	if (min > max)
	{
		return (0);
	}
	p = malloc(sizeof(int) * (max - min + 1));

	if (p == NULL)
		return (0);

	for (x = 0; min <= max; min++, x++)
	{
		p[x] = min;
	}
	return (p);
}
