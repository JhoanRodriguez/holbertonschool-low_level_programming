#include "holberton.h"

/**
 * rot13 - rotate characters 13 places in the alphabet
 * @s: string
 * Return: string `s` rotated
 */

char *rot13(char *s)
{
	int x;
	int y;
	char A[] = "abcdefghijklmABCDEFGHIJKLM";
	char N[] = "nopqrstuvwxyzNOPQRSTUVWXYZ";

	for (x = 0; s[x] != 0; x++)
	{
		for (y = 0; A[y] != '\0'; y++)
		{
			if (s[x] == A[y])
			{
				s[x] = N[y];
			}
			else
			{
				(s[x] == N[y]) ? s[x] = A[y]: s[x];
			}
		}
	}
	return (s);
}
