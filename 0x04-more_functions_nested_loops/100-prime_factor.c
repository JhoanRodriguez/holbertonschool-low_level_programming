#include <stdio.h>
/**
 * main - Print the last digit
 * Return: Return the last digit
 */
int main(void)
{
	long int x = 612852475143;
	long int y;

	for (y = 2; y < x; y++)
	{
		while (x % y == 0)
		{
			x = x / y;
		}
	}
		printf("%ld", x);
		printf("\n");
		return (0);
}
