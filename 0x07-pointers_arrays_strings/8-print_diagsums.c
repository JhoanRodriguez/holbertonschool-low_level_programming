#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - Print the sum of the 2 diagonals of a square matrix of ints
 * @a: 2d array of int types
 * @size: size of array (square)
 */

void print_diagsums(int *a, int size)
{
	int x, y = 0, sum1 = 0, sum2 = 0;
	int size2 = size * size;

	for (x = 0; x < size2; x = x + size + 1)
	{
		sum1 = sum1 + a[x];
	}
	printf("%d, ", sum1);

	for (x = size - 1; x < size2; x = x + size - 1)
	{
		if (y != size)
		{
		sum2 = sum2 + a[x];
		y++;
		}
	}
	printf("%d\n", sum2);
}
