#include "lists.h"

/*
* add_dnodeint_end - Ajoute un nouveau nœud à la fin d'une liste dlistint_t.
* @head: Un double pointeur vers la tête de la liste.
* @n: L'entier que le nouveau nœud doit contenir.
*
* Retour: Le nouveau nœud.
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode, *tmp;

	/* Allouer de la mémoire pour le nouveau nœud */
	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);

	/* Initialiser le nouveau nœud */
	newNode->n = n;
	newNode->next = NULL;

	/* Stocker la tête de la liste dans une variable temporaire */
	tmp = *head;

	/* Si la liste est vide, le nouveau nœud devient la tête */
	if (*head == NULL)
	{
		newNode->prev = NULL;
		*head = newNode;
		return (newNode);
	}
	/* Sinon, parcourir la liste jusqu'à la fin */
	while (tmp->next != NULL)
		tmp = tmp->next;

	/* Ajouter le nouveau nœud à la fin de la liste */
	tmp->next = newNode;
	newNode->prev = tmp;

	/* Retourner le nouveau nœud */
	return (newNode);if (newNode == NULL)
}
