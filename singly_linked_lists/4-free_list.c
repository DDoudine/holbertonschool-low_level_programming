#include "lists.h"

/**
 * free_list - Libère la mémoire allouée pour une liste chaînée.
 * @head: Pointeur vers le début de la liste.
 */

void free_list(list_t *head)
{
	/*Pointeur temporaire pour stocker le nœud suivant*/
	list_t *next_node;

	/*Boucle pour parcourir la liste et libérer la mémoire*/
	while (head != NULL)
	{
		/*Sauvegarde du pointeur vers le nœud suivant.*/
		next_node = head->next;
		/*Libération de la chaine de caracteres*/
		free(head->str);
		/*libération du noeud*/
		free(head);
		/*Mise à jour du pointeur vers le noeud suivant*/
		head = next_node;
	}
}
