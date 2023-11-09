#include "main.h"

/**
 * array_range - Crée un tableau d'entiers dans une plage donnée
 * @min: valeur minimum
 * @max: valeur maximum
 * Return: Tableau d'entiers dans la plage spécifiee
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

