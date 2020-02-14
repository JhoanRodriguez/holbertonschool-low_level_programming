#include "holberton.h"
/**
 * main - Print the last digit
 * Return: Return the last digit
 */
void main(void)
{
	int x = 612852475143;

	while ( x % 2 == 0)
	{
		x = x % 2;
	}
	printf("%d", x);
}
