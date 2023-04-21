#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sums up all its parameters
 * @n: integer parameter
 *
 * Return: sum or 0 if n == 0
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0, sum = 0;
	va_list nums;

	if (n == 0)
	{
		return (0);
	}

	va_start(nums, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(nums, int);
	}
	va_end(nums);
	return (sum);
}
