#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a block of memory using malloc and free
 * @ptr: pointer to memory previously allocated with,
 * a call to ``` malloc : malloc(old_size) ```
 * @old_size: bytes allocated for ptr
 * @new_size: bytes of new memory block
 *
 * Return: pointer to new mem block, NULL or ptr
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *newptr;
	unsigned int j;

	if (new_size == old_size)
		return (ptr);
	if ((new_size == 0) && (ptr != NULL))
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		newptr = malloc(new_size);
		if (newptr == NULL)
			return (NULL);
	}
	if (new_size > old_size && (ptr != NULL))
	{
		newptr = malloc(new_size);
		if (newptr == NULL)
			return (newptr);
		for (j = 0; j < old_size; j++)
			newptr[j] = *((char *)ptr + 1);
		free(ptr);
	}

	return (newptr);
}
