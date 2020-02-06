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
int x;
int y;
int z;
  for (x = '0'; x <= '9'; x++)
    {
      for (y = '1'; y <= '9'; y++)
	{
	  for (z = '2'; z <= '9'; z++)
	    {
	  if (x != y && y != z)
	    {
	      if (x > y > z)
		{
		  continue;
		}
	      putchar(x);
	      putchar(y);
	      if (x == '7' && y == '8' && z == '9')
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
