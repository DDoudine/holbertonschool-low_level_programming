#include "lists.h"

/**
 * dlistint_len - Retourne le nombre d'éléments dans une liste chaînée
 * @h: Pointeur vers la liste
 *
 * Return: Le nombre de nœuds dans la liste
 */
size_t dlistint_len(const dlistint_t *h)
{
	/*variable pour compter le nombre de noeuds*/
	int element_count = 0;

	while (h != NULL)
	{
		/*déplacement vers le noeud suivant*/
		h = h->next;
		/*incrémentation du comlpteur de noeuds*/
		element_count++;
	}
	return (element_count);
}
