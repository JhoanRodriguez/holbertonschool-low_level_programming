#include "holberton.h"
#include <stdlib.h>
char *_strncat(char *dest, char *src, int n);
int _strlen(char *s);
/**
 * str_concat - concatenate two strings using malloc
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to concat string
 */

char *str_concat(char *s1, char *s2)
{
	int a, b;
	char *s3;

	if (s1 == NULL)
	{
		s1 = "";
	}
	else if (s2 == NULL)
	{
		s2 = "";
	}
	a = _strlen(s1);
	b = _strlen(s2);

	s3 = malloc((a + b) * sizeof(char) + 1);

	if (s3 == NULL)
	{
		return (0);
	}
	_strncat(s3,s1,a);
	_strncat(s3,s2,b);
	s3[a+b+1] = '\0';
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
/**
 * _strncat - concatenate two strings
 * @dest: char string to concatenate to
 * @src: char string
 * @n: char to check
 * Return: 'dest'
 */

char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	a = 0;
	while (dest[a] != '\0')
		a++;

	for (b = 0; src[b] != 0; b++)
	{
		if (b < n)
			dest[a] = src[b];

		++a;
	}

	return (dest);
}
