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
	int *array;
	int i, len;

	/* Vérifie si min est supérieur à max */
	if (min > max)
		return (NULL);

	/* Calcule la longueur du tableau */
	for (len = 0; len < (max - min); len++)
		;

	/* Alloue de la mémoire pour le tableau d'entiers */
	array = malloc(sizeof(int) * (len + 1));

	/* Vérifie si l'allocation de mémoire a réussi */
	if (array == NULL)
		return (NULL);

	/* Initialise le tableau avec les valeurs de la plage spécifiée */
	for (i = 0; i <= len; i++)
		array[i] = min++;

	/* Retourne le tableau d'entiers */
	return (array);
}

