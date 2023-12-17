#include "lists.h"
#include <stdlib.h>

/*
* add_dnodeint_end - Ajoute un nouveau nœud à la fin d'une liste dlistint_t.
* @head: Un pointeur vers l'adresse de la tête de la liste dlistint_t.
* @n: L'entier que le nouveau nœud doit contenir.
*
* Return: new (adresse du nouveau nœud) ou NULL (si échec).
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *tmp;

	/* Allouer de la mémoire pour le nouveau nœud */
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	/* Initialiser le nouveau nœud */
	new->n = n;
	new->next = NULL;

	/* Si la liste est vide, le nouveau nœud devient la tête */
	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
	}
	/* Sinon, ajouter le nouveau nœud à la fin de la liste */
	else
	{
		tmp = *head;
		while (tmp->next != NULL)
			tmp = tmp->next;
		new->prev = tmp;
		tmp->next = new;
	}

	/* Retourner l'adresse du nouveau nœud */
	return (new);
}
