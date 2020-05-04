#include "holberton.h"
#include <stdlib.h>

/**
 * _strstr - locate a substring
 * @h: string
 * @n: string substring
 * Return: Pointer to beginning of substring, or NULL if not found.
 */

char *_strstr(char *h, char *n)
{
	int x, y, z;

	if (h == NULL || n == NULL)
		return (0);

	for (x = 0; h[x] != '\0'; x++)
	{
		for (z = x, y = 0; n[y] != '\0'; y++, z++)
		{
			if (h[z] != n[y] || h[z] == '\0')
			{
				break;
			}
		}
		if (n[y] == 0)
		{
			return (&h[x]);
		}
	}
	return (0);
}
