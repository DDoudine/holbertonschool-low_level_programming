#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - Crée un tableau d'entiers dans une plage donnée.
 * @min_value: Valeur minimale de la plage.
 * @max_value: Valeur maximale de la plage.
 *
 * Return: Pointeur vers le tableau d'entiers.
 */
int *array_range(int min_value, int max_value)
{
	/* Pointeur pour stocker l'adresse du tableau d'entiers */
	nt *result_array;
	int index;
	/* Calcul de la taille du tableau */
	int array_size = max_value - min_value + 1;

	/* Vérifie si min_value est supérieur à max_value */
	if (min_value > max_value)
		return (NULL);

	/* Alloue de la mémoire pour le tableau d'entiers */
	result_array = malloc(sizeof(int) * array_size);

	/* Vérifie si l'allocation de mémoire a réussi */
	if (result_array == NULL)
	return (NULL);

	/* Initialise le tableau avec les valeurs de la plage spécifiée */
	for (index = 0; index < array_size; index++)
	result_array[index] = min_value++;

	/* Retourne le tableau d'entiers */
	return (result_array);
}

