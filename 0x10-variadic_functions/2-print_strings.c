#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_strings - prints strings
 * @n: an input
 * @separator: separator for input
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int j;
	va_list args;
	char *s;

	va_start(args, n);
	j = 0;
	while (j < n)
	{
		s = va_arg(args, char *);
		if (s == NULL)
			s = "(nil)";
		printf("%s", s);
		if (separator != NULL && j < n - 1)
			printf("%s", separator);
		j++;
	}
	va_end(args);
	printf("\n");
}
