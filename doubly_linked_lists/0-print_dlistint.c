#include "lists.h"

/**
 * print_dlistint - Imprime tous les éléments d'une liste dlistint_t
 * @h: Pointeur vers la liste
 *
 * Return: le nombre de noeuds dans la liste
 */
size_t print_dlistint(const dlistint_t *h)
{
	/*variable pour compter le nombre de noeuds*/
	int element_count = 0;

	while (h != NULL)
	{
		/*impression de la valeur du noeud*/
		printf("%d\n", h->n);
		/*déplacement vers le noeud suivant*/
		h = h->next;
		/*incrémentation du compteur de noeuds*/
		element_count++;
	}
	return (element_count);
}
