#include "main.h"

/**
 * array_range - Function that creates an array of integers
 * @min: minimum value
 * @max: maximum value
 * Return: Array Range
 */

int *array_range(int min, int max)
{
	int *array;
	int i, len;

	if (min > max)
		return (NULL);

	for (len = 0; len < (max - min); len++)
		;

	array = malloc(sizeof(int) * (len + 1));

	if (array == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
		array[i] = min++;

	return (array);
}

