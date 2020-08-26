#include "search_algos.h"

/**
 * linear_search - function that uses linear search algorithm
 * @array: array to be searched
 * @size: size of array
 * @value: value to be searched
 * Return: -1 if not found else return the first index
 */
int linear_search(int *array, size_t size, int value)
{
	size_t x = 0;
	if (array)
	{
		for (x = 0;x < size; x++)
		{
			printf("Value checked array[%lu] = [%d]\n",x , array[x]);
			if (array[x] == value)
				return (x);
		}
	}
	return (-1);
}