#include "holberton.h"
int _strlen_recursion(char *s);
int aux(char *s, int x, int y);
/**
 * is_palindrome - check if a string is a palindrome
 * @s: char array string
 * Return: 1 if palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	return (aux(s, 0, _strlen_recursion(s) - 1));
}
/**
 * _strlen_recursion - return length of a string
 * @s: string
 * Return: length of string
 */
		int _strlen_recursion(char *s)
	{
		if (*s == '\0')
		{
			return (0);
		}
		return (_strlen_recursion(s + 1) + 1);
	}
/**
 * aux - return length of a string
 * @x: string
 * @s: string
 * @y: string
 * Return: length of string
 */
int aux(char *s, int x, int y)
{
	if ((s[x] == s[y]) && (x < y))
	{
		return (aux(s, x + 1, y - 1));
	}
	else if (s[x] != s[y])
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
