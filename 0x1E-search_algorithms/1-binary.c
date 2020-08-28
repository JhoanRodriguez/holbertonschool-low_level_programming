#include "search_algos.h"
/**
 * print_array - function to print the array where the value will be searched
 * @array: array to be searched
 * @left: left value
 * @right: right value
 */
void print_array(int *array, size_t left, size_t right)
{
	printf("Searching in array: ");

	for (; left <= right; left++)
	{
		printf("%d", array[left]);
		if (left != right)
			printf(", ");
	}
	printf("\n");
}


/**
 * binary_search - function to do binary search
 * @array: array to be searched
 * @size: size of array
 * @value: value to be searched
 * Return: -1 else index
 */
int binary_search(int *array, size_t size, int value)
{
	size_t right = 0, left = 0, middle = 0;

	if (array)
	{
		right = size - 1;

		while (left <= right)
		{
			print_array(array, left, right);
			middle = (left + right) / 2;
			if (array[middle] == value)
				return (middle);
			else if (array[middle] < value)
				left = middle + 1;
			else
				right =  middle - 1;
		}
	}

	return (-1);
}
