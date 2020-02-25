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
		for (y = z , j = 0; n[j] != '\0';j++, z++)
		{
			if (h[pos] != n[j] || h[z] == '\0')
			{
				break;
			}
		}
		if (n[j] == 0)
		{
			return (&h[x]);
		}
	}
	return (0);
}
