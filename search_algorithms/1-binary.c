#include "search_algos.h"

/**
 * binary_search - Executes a binary search on a sorted integer array.
 * Exécute une recherche binaire sur un tableau d'entiers triés.
 *
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 *
 * Return: The index of the found value if present,
 * otherwise -1 if the value is absent or the array is empty.
*/

int binary_search(int *array, size_t size, int value)
{
	int start = 0;
	int middle = 0;
	int end = size - 1;
	int index;

	/* Vérifier si le tableau est NULL */
	if (array == NULL)
		return (-1);

	/* Tant que la zone de recherche est valide */
	while (start <= end)
	{
		/* Calculer le milieu de la zone de recherche */
		middle = (start + end) / 2;

		printf("Searching in array: ");

		/* Afficher la zone de recherche actuelle */
		for (index = start; index <= end; index++)
		{
			printf("%d", array[index]);

			if (index < end)
				printf(", ");
		}
		printf("\n");

		/* Si la valeur est inférieure au milieu, déplacer la fin à milieu - 1 */
		if (value < array[middle])
			end = middle - 1;

		/*Si la valeur est supérieure au milieu, déplacer le début à milieu +1*/
		else if (value > array[middle])
			start = middle + 1;

		else
			return (middle);/* Retourne le milieu si valeur trouvée */
	}
	/* Si la valeur n'est pas trouvée, retourner -1 */
	return (-1);
}
