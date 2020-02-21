#include "holberton.h"

/**
 * rot13 - rotate characters 13 places in the alphabet
 * @s: string
 * Return: string `s` rotated
 */

char *rot13(char *s)
{
	int x;
	char A[] = "nopqrstuvwxyzabcdefghijklm";
	char N[] = "NOPQRSTUVWXYZABCDEFGHIJKLM";

	for (x = 0; s[x] != 0; x++)
	{
		if ((s[x] > 64 && s[x] < 91) || (s[x] > 96 && s[x] < 123))
		{
			s[x] = (s[x] - 65 > 25) ?
				A[s[x] - 97] : N[s[x] - 65];
		}
	}
	return (s);
}
