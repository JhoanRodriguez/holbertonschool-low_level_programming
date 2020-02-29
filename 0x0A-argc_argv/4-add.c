#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - add 2 positive numbers and print the result
 * @argc: argument count
 * @argv: argument vector, array of strings
 * Description: If no number is passed to program, print 0.
 * If one of the numbers contain non-digits, print Error.
 * Return: 1 if error, 0 if function runs properly.
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int x, y;

	if (argc < 2)
	{
		printf("0\n");
	}
	else
	{
		for (x = 1; x < argc; x++)
		{
			for (y = 0; argv[x][y] != '\0'; y++)
			{
				if (argv[x][y] < 48 || argv[x][y] > 59)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum = sum + atoi(argv[x]);
		}
		printf("%i\n", sum);
	}
	return (0);
}
