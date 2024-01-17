#include "search_algos.h"

/**
 * linear_search - Performs a linear search in an array of integers.
 * Effectue une recherche linéaire dans un tableau d'entiers.
 *
 * @array: Pointer to the first element of the array to search.
 * @size: Number of elements in the array.
 * @value: The value to find.
 *
 * Return: The index where the value was first found in the array,
 * or -1 if the value is not in the array or if the array is NULL.
 */

int linear_search(int *array, size_t size, int value)
{
	size_t index;

	/* Vérifie si le tableau est NULL */
	if (array == NULL)
		return (-1);

	/* Parcourir le tableau */
	for (index = 0; index < size; index++)
	{
		/* Affiche la valeur actuellement vérifiée */
		printf("Value checked array[%lu] = [%d]\n", index, array[index]);

		/* Retourne l'index si la valeur est trouvée */
		if (array[index] == value)
			return (index);
	}
	return (-1);
}
