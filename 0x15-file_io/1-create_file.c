#include "main.h"

/**
 * create_file - creates and fills a file it with a given text
 * @filename: file name to create
 * @text_content: text to write into the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int _fd, _wrt, _str = 0;

	if (!filename)
		return (-1);

	_fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (_fd < 0)
		return (-1);

	if (text_content)
	{
		while (text_content[_str])
			_str++;
		_wrt = write(_fd, text_content, _str);
		if (_wrt != _str)
			return (-1);
	}

	close(_fd);

	return (1);
}
