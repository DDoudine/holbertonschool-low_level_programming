#include "lists.h"
#include <stdio.h>

/**
 * print_list - imprime tous les éléments d'une liste chaînée list_t
 * @h: Pointeur vers le début de la liste
 *
 * Return: le nombre de noeuds
 */

size_t print_list(const list_t *h)
{
	int node_count = 0;

    /*Parcours de la liste chaînée tant que le pointeur n'est pas NULL*/
	while (h != NULL)
	{
		/*Vérifie si la chaîne du noeud actuel n'est pas NULL*/
		if (h->str != NULL)

			/*Affiche la longueur et la chaîne du noeud*/
			printf("[%u] %s\n", h->len, h->str);

		/*Affiche la longueur et "(nil)" si la chaîne est NULL*/
		else
			printf("[%u] %s\n", h->len, "(nil)");

		/*Passe au noeud suivant*/
		h = h->next;

		/*incrémente le compteur de noeuds*/
		node_count++;
	}
	/*Retourne le nombre total de noeuds dans la liste*/
	return (node_count);
}
