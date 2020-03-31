#include "holberton.h"

/**
 * read_textfile - Read a text file and print to POSIX stdout
 * @filename: char string of files name
 * @letters: number of letters to read and print
 * Return: number of letters read and printed, or 0 if error
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t read_file, write_files;
	char *buffer;

	buffer = malloc (sizeof(char) * letters);

	if (buffer == NULL)
		return (0);

	fd = open (filename, O_RDONLY);

	if (fd == -1)
		return (0);

	read_file = read (fd, buffer, letters);

	if (read_file == -1)
		return (0);

	write_file = write(1, buffer, read_files);

	if (write_file == -1)
		return (0);

	close(fd);

	return (read_file);
}
