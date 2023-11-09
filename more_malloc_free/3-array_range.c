#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: integer
 * @max: integer
 *
 * Return: Pointer
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i;
	int sum = max - min + 1;

	if (min > max)
		return (NULL);
	ptr = malloc(sizeof(int) * sum);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < sum; i++)
	{
	ptr[i] = min++;
	}
	return (ptr);
}

