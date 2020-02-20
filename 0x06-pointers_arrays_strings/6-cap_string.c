#include "holberton.h"

/**
 * cap_string - capitalize all words of a string
 * @str: string
 * Return: `str`
 */

char *cap_string(char *str)
{
	char ex[] = ",;.!?(){}\n\t\" ";
	int x, y, cap = 0;

	for (x = 0; str[x] != '\0'; x++)
	{
		for (y = 0; ex[y] != '\0';y++)
		{
			if (str[x] == ex[y])
			{
				cap = 1;
			}
			else if ((str[x] >=65 && str[x] < 91) || (str[x] > 47 && str[x] < 58))
			{
				cap = 0;
			}

			if (str[x] >= 97 && str[x] < 123 && cap == 1)
			{
				str[x] = str[x] - 32;
				cap = 0;
			}
		}
	}
	return (str);
}
