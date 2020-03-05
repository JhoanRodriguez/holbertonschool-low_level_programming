#include "holberton.h"
#include <stdio.h>
int _strlen(char *s);
/**
 * string_nconcat - concatenate 2 strings, only n bytes of s2
 * @s1: string 1
 * @s2: string 2
 * @n: bytes to include of s2
 * Return: NULL if fail, else pointer to malloc memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int sizes1, sizes2, x, y = 0;

	sizes1 = _strlen(s1);
	sizes2 = _strlen(s2);

	if (n >= sizes2)
	{
		n = sizes2;
	}
	if (s1 == NULL)
	{
		s1 = "";
	}
	else if (s2 == NULL)
	{
		s2 = "";
	}
	p = malloc(sizes1 + n + 1);

	if (p == NULL)
	{
		return (0);
	}

	for (x = 0; x < sizes1; x++)
	{
		p[x] = s1[x];
	}
	for  (; x < sizes1 + n; x++, y++)
	{
		p[x] = s2[y];
	}
	p[x] = '\0';
	return (p);

}
/**
 * _strlen - return length of a string
 *
 * @s: char type
 * Return:  length of string
 */
int _strlen(char *s)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
		;
	return (a);
}
