#include "main.h"

/**
 * array_range - Crée un tableau d'entiers dans une plage donnée.
 * @min: Valeur minimale.
 * @max: Valeur maximale.
 * Return: Tableau d'entiers dans la plage spécifiée.
 */

int *array_range(int min, int max)
{
	/* Pointeur pour stocker l'adresse du tableau d'entiers */
	int *result_array;
	int i, length;

	/* Vérifie si min est supérieur à max */
	if (min > max)
		return (NULL);

	/* Calcule la longueur du tableau */
	for (length = 0; length < (max - min); length++)
		;

	/* Alloue de la mémoire pour le tableau d'entiers */
	result_array = malloc(sizeof(int) * (length + 1));

	/* Vérifie si l'allocation de mémoire a réussi */
	if (result_array == NULL)
	return (NULL);

	/* Initialise le tableau avec les valeurs de la plage spécifiée */
	for (i = 0; i <= length; i++)
	result_array[i] = min++;

	/* Retourne le tableau d'entiers */
	return (result_array);
}

