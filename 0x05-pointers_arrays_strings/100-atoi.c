#include "holberton.h"

/**
 * _atoi - Convert a string to integer.
 * @s: char array string
 * Return: first integer found in string
 */

int _atoi(char *s)
{
	int c = 0;
	int x;
	int signo = 0;
	int num = 0;

	while (s[c] != '\0')
	{
		c++;
	}
	for (x = 0; x < c; x++)
	{
		if (s[x] == '-')
		{
			signo = -1;
		}
		if ( s[x] >= 0 && s[x] <= 9)
		{
			num = num + s[x] + '0';
		}
	}
	if (signo != 0)
	{
		num = num * signo;
	}
	return (num);
}
