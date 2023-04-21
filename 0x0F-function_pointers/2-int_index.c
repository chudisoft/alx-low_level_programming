#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array input
 * @size: size of the array
 * @cmp: pointer to the compare value function
 *
 * Return: index for cmpnot , -1 for no matches or if size <= 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
		}
	}
	return (-1);
}
