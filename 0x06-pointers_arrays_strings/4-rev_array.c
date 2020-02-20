#include <stdio.h>
#include "holberton.h"
void swap_int(int *a, int *b);
int _strlen(char *s);
/**
 * swap_int - Print the last digit
 * @a: Number that is going to be splited
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
/**
 * reverse_array - Print the last digit
 * @a: Number that is going to be splited
 * @n: Number that is going to be splited
 * Return: Return the last digit
 */

void reverse_array(int *a, int n)
{
	int x;

	if (a == NULL)
	{
		return;
	}
	if (n < 2)
	{
		return;
	}
	for (x = 0; x < (n / 2); x++)
	{
		swap_int (a + x, a + n - x - 1);
	}
}
