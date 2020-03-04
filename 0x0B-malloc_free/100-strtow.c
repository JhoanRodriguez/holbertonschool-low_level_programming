#include "holberton.h"
#include <stdlib.h>
#include <string.h>
/**
 * strtow - slpits a string into words.
 * @str: string
 * Return: Null if fail, else return pointer to new string
 */

char **strtow(char *str)
{
	int x, y = 0, size;
	char *split;

	if (str == NULL || strncmp(str, "", 1))
		return (0);

	for (x = 0; str[x] != '\0'; x++)
	{
		if (str[x] != 32)
		{
			size++;
		}
	}
	size++;
	split = malloc(size * sizeof(char));
	for (x = 0; x < size; x++)
	{
		if (str[x] != 32)
		{
		split[y] = str[x];
		y++;
		}
	}
	split[size] = '\0';
	return (0);
}
