#include "main.h"

/**
 * main - copies file content into another file
 * @argc: arguments count passed into the program
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int _fd_read, _fd_write, rc, a, b;
	char buf[BUFSIZ];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	_fd_read = open(argv[1], O_RDONLY);
	if (_fd_read < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	_fd_write = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((rc = read(_fd_read, buf, BUFSIZ)) > 0)
	{
		if (_fd_write < 0 || write(_fd_write, buf, rc) != rc)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(_fd_read);
			exit(99);
		}
	}
	if (rc < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	a = close(_fd_read);
	b = close(_fd_write);
	if (a < 0 || b < 0)
	{
		if (a < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", _fd_read);
		if (b < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", _fd_write);
		exit(100);
	}
	return (0);
}
