#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - executes a pointer function
 * @array: array of element input
 * @size: size of the array
 * @action: pointer to function
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int k;

	if (array && size && action)
	{
		for (k = 0; k < size; k++)
		{
			(*action)(array[k]);
		}
	}
}
