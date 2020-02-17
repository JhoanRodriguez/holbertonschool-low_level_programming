#include "holberton.h"
/**
 * swap_int - Print the last digit
 * @a: Number that is going to be splited
 * @b: Number that is going to be splited
 * @b: Number that is going to be splited
 * Return: Return the last digit
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
