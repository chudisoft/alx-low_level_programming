#include "main.h"

/**
 * append_text_to_file - appends text to the end of a given file
 * @filename: file name to append the text to
 * @text_content: content to append into the file
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int _fd, _wrt, _str = 0;

	if (!filename)
		return (-1);

	_fd = open(filename, O_WRONLY | O_APPEND);
	if (_fd < 0)
		return (-1);

	if (text_content)
	{
		while (text_content[s])
			_str++;
		_wrt = write(_fd, text_content, _str);
		if (_wrt != _str)
			return (-1);
	}

	close(_fd);

	return (1);
}
