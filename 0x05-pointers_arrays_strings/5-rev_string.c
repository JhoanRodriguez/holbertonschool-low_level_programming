#include <stdio.h>
#include "holberton.h"
int _sizeof(char *s);
void swap_char(char *a, char *b);
int _strlen(char *s);
/**
 * swap_char - swap funcion
 * @a: Number that is going to be splited
 * @b: Number that is going to be splited
 * Return: Return the last digit
 */
void swap_char(char *a, char *b)
{
	char c;

	c = *a;
	*a = *b;
	*b = c;
}
/**
 * _strlen - swap funcion
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
 * rev_string - Print the last digit
 * @s: Number that is going to be splited
 * Return: Return the last digit
 */
void rev_string(char *s)
{
	int size;
	int x;

	size = _strlen(s) - 1;
	for (x = 0; x < size / 2; x++)
	{
		swap_char(s + x, s + size - x);
	}
}
