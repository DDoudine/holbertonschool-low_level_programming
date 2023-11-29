#include "lists.h"
#include <stdio.h>

/**
 * list_len - retourne le nombre d'éléments dans une liste chaînée list_t
 * @h: pointeur
 *
 * Return: le nombre d elements
 */
size_t list_len(const list_t *h)
{
	/*Initialisation du compteur d elements*/
	int element_count = 0;

	/*parcours la liste chainee tant que le pointeur n est pas NULL*/
	while (h != NULL)
	{
		/*passe au noeud suivant*/
		h = h->next;

		/*incremente le compteur d elements*/
		element_count++;
	}

	/*retourne le nombre total d elements dans la liste*/
	return (element_count);
}
