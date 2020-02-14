#include <stdio.h>
/**
 * main - Print the last digit
 * Return: Return the last digit
 */
int main(void)
{
	long int x = 612852475143;

	while (x % 2 != 0)
	{
		x = x % 2;
	}
	printf("%ld", x);
	printf("\n");
	return (0);
}
