#include "main.h"

/**
 * flip_bits - counts number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, c = 0;
	unsigned long int _cu;
	unsigned long int _exc = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		_cu = _exc >> i;
		if (_cu & 1)
			c++;
	}

	return (c);
}
