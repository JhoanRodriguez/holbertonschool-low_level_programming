#include "function_pointers.h"

/**
 * array_iterator - execute a function pointer on each element of an array
 * @array: array of integers
 * @size: size of array
 * @action: function pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long x;

	if (!array || !size || !action)
		return;

	for (x = 0; x < size; x++)
	{
		action(array[x]);
	}
}
