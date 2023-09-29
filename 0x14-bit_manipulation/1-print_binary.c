#include "main.h"

/**
 * print_binary - prints binary of a decimal number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	/* check if n is 0, in which case it has a single binary digit '0' */
	if (n == 0)
	{
		_putchar('0'); /* print '0' and return */
		return;
	}

	/* recursively print the binary representation */
	if (n >> 0) /* if n is not 0 */
	{
		if (n >> 1)
			/* recursively shift and print the remaining bits */
			print_binary(n >> 1);
		/* print the least significant bit as '0' or '1' */
		_putchar((n & 1) + '0');
	}
	else
	{
		_putchar('0'); /* print '0' if n is zero */
	}
}
