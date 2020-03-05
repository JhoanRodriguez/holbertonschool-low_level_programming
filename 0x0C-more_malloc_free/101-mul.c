#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int check_num(char *st);
/**
 * main - multiply 2 numbers passed to main, or Error
 * @argc: argument count
 * @argv: argument vector
 * Return: 1 if error, 0 if function runs correctly
 */
int main(int argc, char *argv[])
{
	if (argc != 3 || (!(check_num(argv[1]) && check_num(argv[2]))))
	{
		printf("Error\n");
		exit(98);
	}
	else
	{
		printf("%d\n", (atoi(argv[1]) * atoi(argv[2])));
	}
	return (0);
}
/**
 * check_num - function to check the string for number
 * @st: string being passed
 * Return: 1 for number 0 for not
 */
int check_num(char *st)
{
	int a;

	for (a = 0; st[a] != '\0'; a++)
	{
		if (st[a] < '0' || st[a] > '9')
			return (0);
	}
	return (1);
}
