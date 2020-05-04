#include "holberton.h"
int _strlen(char *s);

/**
 * _strncpy - Copy a string starting from index 0 of `dest`.
 * @dest: string
 * @src: string
 * @n: number of chars to copy over
 * Return: `dest` edited string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int size2 = _strlen(src);
	int x, z = n;

	if (n > size2)
	{
		n = size2;
	}

	for (x = 0; x < n; x++)
	{
		dest[x] = src[x];
	}
	for  (; x < z; x++)
	{
		dest[x] = '\0';
	}
	return (dest);
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
