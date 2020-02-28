#include "holberton.h"
#include <stdio.h>

/**
 * main - print all arguments it receives
 * @argc: argument count
 * @argv: argument vector, array of strings
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}
	return (0);
}
