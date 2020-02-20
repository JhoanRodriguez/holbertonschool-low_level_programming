#include "holberton.h"

/**
 * string_toupper - Change all lowercase letters to uppercase
 * @c: string
 * Return: c
 */

char *string_toupper(char *c)
{
	int x;

	for (x = 0; c[x] != '\0'; x++)
	{
		if (c[x] >= 97 && c[x] < 123)
		{
			c[x] = c[x] - 32;
		}
	}
	return (c);
}
