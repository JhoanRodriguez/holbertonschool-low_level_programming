#include <stdio.h>
#include "holberton.h"
/**
 * rev_string - Print the last digit
 * @s: Number that is going to be splited
 * Return: Return the last digit
 */
void rev_string(char *s)
{
	int c = 0;

	while (s[c] != '\0')
	{
		c++;
	}
	char vec[c];
	vec[c] = *s;
	printf ("%s", vec);

	while (s[c - 1] != '\0')
	{
		*s[c-1] = *s[c - 1];
		c--;
		}

}
