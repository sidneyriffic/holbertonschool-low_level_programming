#define _GNU_SOURCE
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
/**
 * close_errchk - closes a file descriptor and prints an error message if it fails
 *
 * @fd: file descriptor to close
 *
 * Return: 0 on success, -1 on failure
 */
int close_errchk(int fd)
{
	int err = 0;

	err = close (fd);
	if (err == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	return (err);
}

/**
 * main - copy one file to another, new file with perms 664
 * usage - cp file_from file_to
 *
 * @ac: number of arg
 * @av: list of args
 *
 * Return: 97 if incorrect num of args
 * 98 if file_from does not exist or unreadable
 * 99 if write fails
 * 100 if file close fails
 * 0 otherwise
 */
int main(int ac, char *av[])
{
	char buf[1024];
	ssize_t lenr, lenw;
	int file_from, file_to;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		return (97);
	}
	file_from = open(av[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		return (98);
	}
	file_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		close_errchk(file_from);
		return (99);
	}
	do {
		lenr = read(file_from, buf, 1024);
		if (lenr == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
			close_errchk(file_from);
			close_errchk(file_to);
			return (98);
		}
		lenw = write(file_to, buf, lenr);
		if (lenw == -1 || lenw != lenr)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			close_errchk(file_from);
			close_errchk(file_to);
			return (99);
		}
	} while (lenr == 1024);
	close_errchk(file_from);
	close_errchk(file_to);
	return (0);
}
