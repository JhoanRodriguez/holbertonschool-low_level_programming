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
int w;
int x;
int y;
int z;
for (w = '0'; w <= '9'; w++)
{
for (x = '0'; x <= '9'; x++)
{
for (y = '0'; y <= '9'; y++)
{
for (z = '0'; z <= '9'; z++)
{
if (w > y || x > z)
{
continue;
}
if (w == y && x == z)
{
continue;
}
putchar(w);
putchar(x);
putchar(' ');
putchar(y);
putchar(z);
if (w == '9' && x == '8' && y == '9' && z == '9')
{
break;
}
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
