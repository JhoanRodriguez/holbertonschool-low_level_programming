#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - main block
 * Description: Get a random number and print the number
 * and if it is positive, negative, or zero
 * Return: 0
 */
int main(void)
{
char x;
for (x = 'a'; x <= 'z'; x++)
{
putchar(x);
}
for (x= 'A'; x <= 'Z'; x++)
{
putchar(x);
}
putchar ('\n');
return (0);
}
