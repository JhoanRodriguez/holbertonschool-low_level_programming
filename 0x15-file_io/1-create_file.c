#include "holberton.h"

/**
 * create_file - create a file with read/write access for user
 * @filename: name of file to create
 * @text_content: string to write to file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, x , write_file;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (x = 0; text_content [x] != '\0'; x++)
		{
			continue;
		}

		write_file = write (fd, text_content, x);

		if (write_file == -1)
			return (-1);
	}
	close (fd);
	return (1);
}
