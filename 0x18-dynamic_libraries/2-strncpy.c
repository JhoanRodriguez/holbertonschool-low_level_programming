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
	int i;

	i = 0;

	for (i = 0 ; i < n && src[i] != 0 ; i++)
		dest[i] = src[i];

	while (i < n)
	{
		dest[i] = 0;
		i++;
	}

	return (dest);
}