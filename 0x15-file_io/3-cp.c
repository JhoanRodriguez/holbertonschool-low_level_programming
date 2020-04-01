#include "holberton.h"
/**
 * main - create the copy bash script
 * @ac: argument count
 * @av: arguments as strings
 * Return: 0
 */
int main(int ac, char **av[])
{
	int f_from, f_to, read_value, ret_value, BUFSIZE = 1024;
	char buf[1024];

	if (ac != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"),
			exit(97);
	if (av[1] == NULL)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]),
			exit(98);
	if (av[2] == NULL)
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", av[2]),
			exit(99);
	f_from = open(av[1], O_RDONLY);
	f_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC,
		    S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	read_value = read(f_from, buf, BUFSIZE);
	if (read_value == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]),
			exit(98);
	while (read_value != 0)
	{
		ret_value = write(f_to, buf, read_value);
		if (ret_value == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
		read_value = read(f_from, buf, BUFSIZE);
		if (read_value == -1)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]),
				exit(98);
	}
	ret_value = close(f_from);
	if (ret_value == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f_from), exit(100);
	ret_value = close(f_to);
	if (ret_value == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f_to), exit(100);
	return (0);
}
