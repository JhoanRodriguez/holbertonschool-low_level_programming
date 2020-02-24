#include "holberton.h"
#include <stdlib.h>
/**
 * _strpbrk - Search a string for any of a set of bytes.
 * @s: string
 * @accept: string to match
 * Return: Pointer to the byte in `s` that matches one of the bytes in `accept`
 * or NULL if no such byte is found.
 */

char *_strpbrk(char *s, char *accept)
{
	int x;
	char **y = 0;

	if (s == NULL || accept == NULL)
		return (0);

	for (; *s != '\0'; s++)
	{
		for (x = 0; *(accept + x) != '\0'; x++)
		{
			if (*s == accept[x])
			{
				y = &s;
				break;
			}
		}
		if (*s == accept[x])
			break;
	}
	return (*y);
}
