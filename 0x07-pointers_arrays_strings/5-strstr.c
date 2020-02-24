#include "holberton.h"
#include <stdlib.h>

/**
 * _strstr - locate a substring
 * @haystack: string
 * @needle: string substring
 * Return: Pointer to beginning of substring, or NULL if not found.
 */

char *_strstr(char *h, char *n)
{
	int x, c = 0;
	char **y = 0;

	if (h == NULL || n == NULL)
		return (0);

	for (; *h != '\0'; h++)
	{
		for (x = 0; *(n + x) != '\0'; x++)
		{
			if (*h == n[x])
			{
				c++;
			}
			else if (*h == '\0')
			{
				return (NULL);
			}
		}
	}
}
