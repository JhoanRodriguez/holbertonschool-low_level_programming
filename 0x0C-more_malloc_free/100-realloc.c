#include "holberton.h"
int _strlen(char *s);
char *_strncpy(char *dest, char *src, int n);
/**
 * _realloc - reallocates a memory block
 * @ptr: pointer to previous memory block
 * @old_size: size in bytes of allocated space for `ptr`
 * @new_size: size in bytes for new allocated space
 * Return: Pointer to new memory block, or NULL if error
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *s;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		if (ptr == NULL)
			return (0);

		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (0);
	}
	s = malloc(old_size);

	if (s == NULL)
		return (0);

	_strncpy(s, ptr, new_size);
	free(ptr);
	ptr = malloc(new_size);
	
	if (ptr == NULL)
		return (0);
	
	_strncpy(ptr, s, new_size);
	free(s);
	return (ptr);
}
/**
 * _strncpy - Copy a string starting from index 0 of `dest`.
 * @dest: string
 * @src: string
 * @n: number of chars to copy over
 * Return: `dest` edited string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int size2 = _strlen(src);
	int x, z = n;

	if (n > size2)
	{
		n = size2;
	}

	for (x = 0; x < n; x++)
	{
		dest[x] = src[x];
	}
	for  (; x < z; x++)
	{
		dest[x] = '\0';
	}
	return (dest);
}
/**
 * _strlen - swap funcion
 * @s: Number that is going to be splited
 * Return: Return the last digit
 */
int _strlen(char *s)
{
	int c = 0;

	while (s[c] != '\0')
	{
		c++;
	}
	return (c);
}
