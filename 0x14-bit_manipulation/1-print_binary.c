#include "main.h"

/**
 * print_binary - prints binary of a decimal number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int numBits = sizeof(unsigned long int) * 8;
    
	for (unsigned long int i = numBits - 1; i >= 0; i--) {
			unsigned long int bit = (n >> i) & 1;
			_putchar('0' + bit);
	}
}
