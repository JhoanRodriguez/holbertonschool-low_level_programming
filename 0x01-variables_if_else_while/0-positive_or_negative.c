#include <stdio.h>
#include <stdlib.h>
/**
* main - main block
* Description: Get a random number and print the number
* and if it is positive, negative, or zero
* Return: 0
*/
int main(void)
{
int n = -100 + rand() % (101 - 100);
if (n > 0)
{
printf("is positive\n");
}
else
{
if (n < 0)
{
printf("is negative\n");
}
else
{
printf("is zero\n");
}
}
return (0);
}
