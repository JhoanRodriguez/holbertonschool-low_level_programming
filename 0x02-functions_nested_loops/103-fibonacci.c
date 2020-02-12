#include <stdio.h>
/**
 * main - main block
 * Description: Print the first 50 fibonacci numbers, starting with 1 and 2.
 * Numbers must be coma and space separated.
 * Return: 0
 */
int main(void)
{
	int a = 1;
	int b = 2;
	int sum = 0;
	int x;

	while (b < 4000000)
	{
		if (b % 2 == 0)
		{
			sum = sum + b;
		}
		x = b;
		b = b + a;
		a = x;
	}
	printf("%d\n", sum);
	return (0);
}
