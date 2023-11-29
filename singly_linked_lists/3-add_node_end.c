#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strlen - calcule la longueur d une chaine de caracteres
 * @s: chaine de caracteres
 *
 * Return: Always 0
 */
int _strlen(char *s)
{
	int index = 0;

	/*boucle pour parcourir la chaine jusqu au caractere \0*/
	while (*s != '\0')
	{
		index++;
		s++;
	}
	return (index);
}

/**
 * add_node_end - ajoute un nouveau noeud a la fin d une liste chainee list_t
 * @head: pointeur vers le debut de la liste
 * @str: nouveau noeud (chaine de caracteres)
 *
 * Return: adresse du nouveau debut de la liste
 */
list_t *add_node_end(list_t **head, const char *str)
{
	/*declaration des variables*/
	list_t *new_node, *last_node;
	char *copy = strdup(str);

	/*allocation de memoire pour le nouveau noeud*/
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL || copy == NULL)
	{
		free(new_node);
		return (NULL);
	}

	/*attribution des valeurs au nouveau noeud*/
	new_node->str = copy;
	new_node->len = strlen(copy);
	new_node->next = NULL;

	/*cas ou la liste est initialement vide*/
	if (*head == NULL)
		*head = new_node;
	else
	{
		/*parcours de la liste jusqu'au dernier noeud*/
		last_node = *head;
		while (last_node->next != NULL)
		{
			last_node = last_node->next;
		}
		/*ajout du nouveau noeud a la fin de la liste*/
		last_node->next = new_node;
	}
	return (*head);
}
