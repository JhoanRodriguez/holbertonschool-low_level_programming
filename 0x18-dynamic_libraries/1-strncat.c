#include "holberton.h"
int _strlen(char *s);
/**
 * _strncat - concatenate two strings
 * @dest: string
 * @src: string
 * @n: number of elements to concatenate in
 * Return: pointer to resulting `dest`
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}

	for (j = 0 ; j < n && src[j] != 0 ; j++, ++i)
		dest[i] = src[j];

	return (dest);
}