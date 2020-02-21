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
	char A[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char N[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (x = 0; s[x] != 0; x++)
	{
		for (y = 0; A[y] != '\0'; y++)
		{
			if ( s[x] == A[y])
			{
				s[x] = N[y];
				break;		
			}
		}
	}
	return (s);
}
