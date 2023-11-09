#include "main.h"

/**
 * _calloc - alloue de la memoire pour un tableau
 * @nmemb: nombre d éléments dans le tableau
 * @size: taille en octets des éléments
 *
 * Return:   pointeur vers la mémoire allouée
 */
 
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int index;

	/* Vérifier si num_elements ou element_size sont nuls */
	if (nmemb == 0 || size == 0)
		return (NULL);

	/* Allouer de la mémoire pour le tableau */
	ptr = malloc(nmemb * size);

	/* Vérifier si l'allocation de mémoire a réussi */
	if (ptr == NULL)
		return (NULL);

	/* Initialiser tous les éléments du tableau à zéro */
	for (index = 0; index < (nmemb * size); index++)
		ptr[index] = 0;

	return (ptr);
}

