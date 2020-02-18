#include <stdio.h>
#include "holberton.h"
int _sizeof (char *s);
/**
 * rev_string - Print the last digit
 * @s: Number that is going to be splited
 * Return: Return the last digit
 */
void rev_string(char *s)
{
	int c = 0;
	int e = 0;
	char tmp;
	int l;

	int _sizeof (char *s)
	{
		while (s[c] != '\0')
		{
			c++;
		}
		c--;
		printf("d", c);
		return (c);
	}
	l = _sizeof(*s);

	while (e < l)
	{
		tmp = s[c];
		s[c] = s[e];
		s[e] = tmp;
		e++;
		c--;
	}
	while ( e < l)
	{
		s[e] = s[e];
		e++;
	}
}
