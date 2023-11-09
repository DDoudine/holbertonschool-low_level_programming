#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - Alloue de la memoire pour un tableau
 * @num_elements: Nombre d éléments dans le tableau
 * @element_size: Taille en octets des éléments
 *
 * Return:   pointeur vers la mémoire allouée
 */
 
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *allocated_memory;
	unsigned int index;

	/* Vérifier si num_elements ou element_size sont nuls */
	if (num_elements == 0 || element_size == 0)
		return (NULL);

	/* Allouer de la mémoire pour le tableau */
	allocated_memory = malloc(num_elements * element_size);

	/* Vérifier si l'allocation de mémoire a réussi */
	if (allocated_memory == NULL)
	return (NULL);

	/* Initialiser tous les éléments du tableau à zéro */
	for (index = 0; index < (num_elements * element_size); index++)
	{
	allocated_memory[index] = 0;
	}
	return (allocated_memory);
}

