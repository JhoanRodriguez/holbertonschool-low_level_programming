#include <stdio.h>

/**
 * main - main block
 * Description: Print the first 50 fibonacci numbers, starting with 1 and 2.
 * Numbers must be coma and space separated.
 * Return: 0
 */
int main(void)
{
	long int x[50];
	int y;

	x[0] = 0;
	x[1] = 1;

	for (y = 2; y <= 51; y++)
	{
		x[y] = x[y - 1] + x[y - 2];
		if (y != 51)
		{
			printf("%li, ", x[y]);
		}
		else
		{
			printf("%li", x[y]);
		}
	}
	printf("\n");
	return (0);
}
