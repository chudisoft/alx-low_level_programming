#include "main.h"

/**
 * print_binary - prints binary of a decimal number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int j, c = 0;
	unsigned long int k;

	for (j = 63; j >= 0; j--)
	{
		k = n >> j;

		if (k & 1)
		{
			_putchar('1');
			k++;
		}
		else if (c)
			_putchar('0');
	}
	if (!c)
		_putchar('0');
}
