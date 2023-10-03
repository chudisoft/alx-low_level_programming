#include "main.h"

/**
 * read_textfile - print content of a text file to the standard output
 * @filename: file name
 * @letters: char count to read and print
 *
 * Return: printed char count, or 0 if it failed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int _fd, _str, _wrt;
	char *_buffer;

	if (!filename)
		return (0);

	_fd = open(filename, O_RDONLY);
	if (_fd < 0)
		return (0);

	_buffer = malloc(sizeof(char) * letters);
	if (!_buffer)
		return (0);

	_str = read(_fd, _buffer, letters);
	if (_str < 0)
	{
		free(_buffer);
		return (0);
	}
	_buffer[_str] = '\0';

	close(_fd);

	_wrt = write(STDOUT_FILENO, _buffer, _str);
	if (_wrt < 0)
	{
		free(_buffer);
		return (0);
	}

	free(_buffer);
	return (_wrt);
}
