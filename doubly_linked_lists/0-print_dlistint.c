#include "lists.h"

/**
 * print_dlistint - Imprime tous les éléments d'une liste dlistint_t
 * @head: Pointeur vers la liste h=header
 *
 * Return: le nombre de noeuds dans la liste
 */
size_t print_dlistint(const dlistint_t *head)
{
	/*variable pour compter le nombre de noeuds*/
	int element_count = 0;

	while (head != NULL)
	{
		/*impression de la valeur du noeud*/
		printf("%d\n", head->n);
		/*déplacement vers le noeud suivant*/
		head = head->next;
		/*incrémentation du compteur de noeuds*/
		element_count++;
	}
	return (element_count);
}
