#include "lists.h"

/**
 * add_dnodeint - ajoute un nouveau noeud au debut de la liste
 * @head: pointeur vers la liste
 * @n: valeur du nouveau noeud
 *
 * Return: adresse du nouvel element ou NULL en cas d'échec
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	/*Nouveau noeud a ajouter*/
	dlistint_t *new_node;
	/*copie de la valeur du noeud*/
	int copy = n;

	/*allocation de memoire pour le nouveau noeud*/
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	/*attribution des valeurs au nouveau noeud*/
	new_node->n = copy;
	new_node->next = *head;
	new_node->prev = NULL;

	/*met a jour le lien precedent du noeud suivant s il existe*/
	if ((*head) != NULL)
		(*head)->prev = new_node;

	/*met a jour le pointeur vers le debut de la liste*/
	*head = new_node;

	return (new_node);
}
