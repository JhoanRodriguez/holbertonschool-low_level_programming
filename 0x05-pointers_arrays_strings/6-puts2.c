#include "holberton.h"
#include <stdio.h>
/**
 * print_rev - Print the last digit
 * @s: Number that is going to be splited
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
	for ( x = 0 ;x <= c; x+=2)
	{
		printf("%c", str[x]);
	}
	printf("\n");
}
