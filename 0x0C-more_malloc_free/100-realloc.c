#include "holberton.h"
char *_strcpy(char *dest, char *src);
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

	s = malloc(old_size);

	if (s == NULL)
	{
	return (0);
	}

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
	if (new_size != old_size)
	{
		_strcpy(s, ptr);
		free(ptr);
		ptr = malloc(new_size);
		
		if (ptr == NULL)
			return (0);
		
		_strcpy(ptr, s);
		free(s);
		return (ptr);
	}
	return (ptr);
}
/**
 * *_strcpy - copy the string
 * @dest: char type string
 * @src: char type string
 * Return: Pointer to `dest`
 */

char *_strcpy(char *dest, char *src)
{
	int x;
	int c = 0;

	while (src[c] != '\0')
	{
		c++;
	}
	for (x = 0; x < c; x++)
	{
		dest[x] = src[x];
	}
	dest[c] = '\0';
	return (dest);
}
