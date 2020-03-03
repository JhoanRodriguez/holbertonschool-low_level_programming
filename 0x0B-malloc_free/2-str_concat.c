#include "holberton.h"
#include <stdlib.h>
int _strlen(char *s);
/**
 * str_concat - concatenate two strings using malloc
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to concat string
 */

char *str_concat(char *s1, char *s2)
{
	int x, y = 0;
	char *s3;

	if (s1 == NULL)
	{
		s1 = "";
	}
	else if (s2 == NULL)
	{
		s2 = "";
	}
	s3 = malloc((_strlen(s1) + _strlen(s2)) + 1);

	if (s3 == NULL)
	{
		return (0);
	}
	for (x = 0; x < _strlen(s1); x++)
	{
		s3[x] = s1[x];
	}
	for (; x < (_strlen(s1) + _strlen(s2)); x++, y++)
	{
		s3[x] = s2[y];
	}
	s3[x] = '\0';
	return (s3);
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
