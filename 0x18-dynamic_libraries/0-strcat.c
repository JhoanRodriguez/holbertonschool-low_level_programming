#include "holberton.h"
int _strlen(char *s);
/**
 * *_strcat - Print the last digit
 * @dest: Number that is going to be splited
 * @src: Number that is going to be splited
 * Return: Return the last digit
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}

	for (j = 0 ; src[j] != '\0' ; j++, ++i)
	{
		dest[i] = src[j];
	}
	return (dest);
}