#include "holberton.h"
#include <stdlib.h>
int _strlen(char *s);
/**
 * _strdup - Duplicate a string using malloc
 * @str: string to duplicate
 * Return: Pointer to a the new duped string
 */

char *_strdup(char *str)
{
	char *a;
	int x;

	if (*str == 0)
	{
		return (0);
	}
	a = malloc(_strlen(str) + 1);
	for (x = 0; x < _strlen(str); x++)
	{
		a[x] = str[x];
	}
	return (a);
	free(a);
}
/**
 * _strlen - Print the last digit
 * @s: Number that is going to be splited
 * Return: Return the last digit
 */
int _strlen(char *s)
{
	int c = 0;

	while (s[c] != '\0')
	{
		c++;
	}
	return (c);
}
