#include "holberton.h"
#include <stdlib.h>
/**
 * _strspn - search a string for a set of bytes
 * @s: char string array
 * @accept: char array to check bytes with
 * Return: Number of bytes in the intial segment of `s`
 */

unsigned int _strspn(char *s, char *accept)
{
	int c = 0;
	int x;

	if (s == NULL || accept == NULL)
		return (0);

	for (; *s != '\0'; s++)
	{
		for (x = 0; *(accept + x) != '\0'; x++)
		{
			if (*s == accept[x])
			{
				c++;
				break;
			}
		}
		if (*(accept + x) == '\0')
			break;
	}
	return (c);
}
