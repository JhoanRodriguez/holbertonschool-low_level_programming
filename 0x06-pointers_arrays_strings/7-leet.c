#include "holberton.h"

/**
 * leet - encode a string into 1337
 * @s: string
 * Return: encoded string `s`
 */

char *leet(char *s)
{
	int x;
	int y;
	char A[] = "aeotlAEOTL";
	char N[] = "4307143071";
	
	for (x = 0; s[x] != 0; x++)
	{
		for (y = 0; A[y] != '\0'; y++)
		{
			if (s[x] == A[y])
			{
				s[x] = N[y];
			}
		}
	}return (s);
}
