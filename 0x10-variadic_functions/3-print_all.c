#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_all - prints anything
 * @format: list of arguments passed to the function
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	unsigned int i;
	va_list nums;
	char *p, *separator;

	va_start(nums, format);
	separator = "";
	i = 0;
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", separator, va_arg(nums, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(nums, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(nums, double));
				break;
			case 's':
				p = va_arg(nums, char *);
				if (p == NULL)
					p = "(nil)";
				printf("%s%s", separator, p);
				break;
			default:
				i++;
				continue;
		}
		separator = ", ";
		i++;
	}
	printf("\n");
	va_end(nums);
}
