#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * simple_print_buffer - print buffer in hexa
 * @buffer: memory address to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
void simple_print_buffer(int *buffer, unsigned int size)
{
	unsigned int k;

	k = 0;
	while (k < size)
	{
		if (k % 10)
		{
			printf(" ");
		}
		if (!(k % 10) && k)
		{
			printf("\n");
		}
		printf("0x%02x", buffer[k]);
		k++;
	}
	printf("\n");
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int *a;

	a = array_range(0, 10);
	simple_print_buffer(a, 11);
	free(a);
	return (0);
}
