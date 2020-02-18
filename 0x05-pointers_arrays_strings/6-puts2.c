#include "holberton.h"
#include <stdio.h>
/**
 * puts2 - Print the last digit
 * @str: Number that is going to be splited
 * Return: Return the last digit
 */
void puts2(char *str)
{
	int c = 0;
	int x;

	while (str[c] != '\0')
	{
		c++;
	}
	for (x = 0; x <= c; x++)
	{
		if (x % 2 == 0)
		{
		printf("%c", str[x]);
		}
	}
	printf("\n");
}
