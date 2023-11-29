#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strlen - calcule la longueur d une chaine de caracteres
 * @s: chaine de caracteres
 *
 * Return: longueur de la chaine
 */
int _strlen(char *s)
{
	int index = 0;

	/*boucle pour pacourir la chaine jusqu'au caractere \0*/
	while (*s != '\0')
	{
		index++;
		s++;
	}
	return (index);
}

/**
 * add_node - ajoute un nouveau noeud au debut d une liste chainee list_t
 * @head: pointeur vers le debut de la liste
 * @str: nouveau noeud
 *
 * Return: adressse du nouvel element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	char *copy;
	int lenght;

	/*allocation de memoire pour le nouveau noeud*/
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	/*duplication de la chaine a ajouter dans le nouveau noeud*/
	copy = strdup(str);
	if (copy == NULL)
	{
		/*en cas echec dla duplication, liberer la memoire pour le new noeud */
		free(new_node);
		return (NULL);
	}
	lenght = _strlen(copy);

	/*attribution des valeurs au nouveau noeud*/
	new_node->str = copy;
	new_node->len = lenght;
	new_node->next = *head;

	/*mise a jour du pointeur de debut dla liste pour pointer vers le new noeud*/
	*head = new_node;

	return (new_node);
}
