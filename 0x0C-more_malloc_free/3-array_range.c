#include <stdlib.h>

/**
 * *array_range - returns integer arrays and stores numbers min to max,
 * both inclusive in the array
 * @min: smallest number stored
 * @max: largest number stored
 *
 * Return: pointer to newly created array on success,
 * else NULL if min > max or if malloc fails
 */

int *array_range(int min, int max)
{
	int *arr;
	int c, num, index;

	if (min > max)
		return (0);
	c = (max - min) + 1;
	arr = malloc(sizeof(int) * c);
	if (arr == 0)
		return (0);
	for (num = min, index = 0; num <= max; index++, num++)
		*(arr + index) = num;
	return (arr);
}
