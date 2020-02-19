#include "holberton.h"
#include <stdio.h>
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
	if (s == '/0')
		return;
	while (s[c] != '\0')
	{
		c++;
	}
	for (x = 0; x < c; x++)
	{
		if (s[x] == '-')
		{
			signo++;
		}
		if (s[x] >= 48 && s[x] <= 57)
		{
			num = ((num * 10) + (s[x] - '0'));
		}
		else if (num != 0)
		{
			break;
		}
	}
	if (signo % 2 != 0)
	{
		num = num * -1;
	}
	return (num);
}
