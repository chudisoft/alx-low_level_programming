#include "main.h"

/**
 * get_bit - get value of a bit at a given index in a decimal number
 * @n: search number
 * @index: bit index
 *
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int _bit_val;

	if (index > 63)
		return (-1);

	_bit_val = (n >> index) & 1;

	return (_bit_val);
}
