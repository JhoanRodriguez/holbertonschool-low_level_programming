#include <stdio.h>
/**
 * main - Print the last digit
 * Return: Return the last digit
 */
int main(void)
{
	int x;

	for (x = 1; x <= 100; x++)
	{
		if (x % 3 == 0 && x % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (x % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (x % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			if (x != 100)
				printf("%d ", x);
			else
				printf("%d", x);
		}
	}
	printf("\n");
	return (0);
}
