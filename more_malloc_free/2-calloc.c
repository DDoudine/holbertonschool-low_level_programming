#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - Alloue et initialise à zéro un tableau en mémoire dynamique.
 * @nmemb: Nombre d'éléments dans le tableau.
 * @size: Taille en octets de chaque élément du tableau.
 *
 * Return: Pointeur vers la mémoire allouée, NULL en cas d'échec.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	/* Pointeur mémoire */
	char *ptr;
	unsigned int i;

	/* Vérifie les conditions d'allocation */
	if (nmemb == 0 || size == 0)
		return (NULL);

	/* Alloue la mémoire pour le tableau */
	ptr = malloc(size * nmemb);

	/* Vérifie l'allocation de mémoire */
	if (ptr == NULL)
		return (NULL);

	/* Initialise les éléments à zéro */
	for (i = 0; i < (size * nmemb); i++)
		ptr[i] = '\0';

	/* Retourne le pointeur vers la mémoire allouée */
	return (ptr);
}

