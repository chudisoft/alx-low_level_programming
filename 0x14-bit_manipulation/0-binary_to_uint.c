#include "main.h"

/**
 * binary_to_uint - get binary number of unsigned int
 * @b: binary number as string
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int j;
	unsigned int _dec = 0;

	if (!b)
		return (0);

	for (j = 0; b[j]; j++)
	{
		if (b[j] < '0' || b[j] > '1')
			return (0);
		_dec = 2 * _dec + (b[j] - '0');
	}

	return (_dec);
}
