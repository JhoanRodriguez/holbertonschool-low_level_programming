#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the min number of coins to make change for an amount of money
 * @argc: argument count
 * @argv: argument vector, array of strings
 * Return: 1 if error, 0 otherwise
 */

int main(int argc, char *argv[])
{
	int x, y, money, counter = 0;
	int cents[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	for (x = 1; x < argc; x++)
	{
		for (y = 0; argv[x][y] != '\0'; y++)
		{
			if (argv[x][y] < 48 || argv[x][y] > 59)
			{
				printf("0\n");
				return (1);
			}
		}
	}
	money = atoi(argv[1]);
	for (y = 0; money != 0; y++)
	{
		if (money >= cents[y])
		{
			money = money - cents[y];
			counter++;
			if (money >= cents[y])
			{
				y = y - 1;
			}
		}
	}
	printf("%i\n", counter);
	return (0);
}
