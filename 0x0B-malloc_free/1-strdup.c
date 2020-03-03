#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup - Duplicate a string using malloc
 * @str: string to duplicate
 * Return: Pointer to a the new duped string
 */

char *_strdup(char *str)
{
	char *a;
	unsigned int x;

	if (*str == 0)
	{
		return (0);
	}
	a = malloc(strlen(str));
	for (x = 0; x < strlen(str); x++)
	{
		a[x] = str[x];
	}
	return (a);
}
