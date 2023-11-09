#include "main.h"

/**
 * _calloc - alloue de la mémoire pour un tableau et l'initialise à zéro
 * @nmemb: nombre d'éléments dans le tableau
 * @size: taille en octets de chaque élément du tableau
 *
 * Return: Pointeur vers la mémoire allouée, ou NULL en cas d'échec
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	/* Pointeur pour stocker l'adresse de la mémoire allouée */
    char *ptr;
    unsigned int count;

    /* Vérifie si le nombre d'éléments ou la taille des éléments est nul */
    if (nmemb == 0 || size == 0)
        return (NULL);

    /* Allouer de la mémoire pour le tableau */
    ptr = malloc(nmemb * size);

    /* Vérifie si l'allocation de mémoire a réussi */
    if (ptr == NULL)
        return (NULL);

    /* Initialise tous les éléments du tableau à zéro */
    for (count = 0; count < (nmemb * size); count++)
        ptr[count] = 0;

    /* Retourne le pointeur vers la mémoire allouée */
    return (ptr);
}

