#include "holberton.h"
#include <stdlib.h>
/**
 * _strchr - locate character in a string
 * @s: char array string
 * @c: char to look for
 * Return: NULL if char not found, or pointer to first occurrence of char `c`
 */

char *_strchr(char *s, char c)
{

	if (s == NULL)
		return (0);

	for (; s != '\0'; s++)
	{
		if (*s == c)
		{
			break;
		}
		else if (s == '\0')
		{
			return (0);
		}
	}
	return (s);
}
