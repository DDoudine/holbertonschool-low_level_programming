#include "hash_tables.h"

/**
 * hash_table_create - crée une table de hachage
 * @size: taille du tableau
 *
 * Return: pointeur vers la table de hachage créée ou NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int index;

	/* Alloue de la mémoire pour la structure de la table de hachage */
	hash_table_t *table = malloc(sizeof(*table));

	/* Vérifie si l'allocation de mémoire a réussi */
	if (!table)
		return (NULL);

	/* Définit la taille de la table de hachage */
	table->size = size;

	/* Alloue de la mémoire pour le tableau de noeuds de hachage */
	table->array = malloc(table->size * sizeof(*(table->array)));

	/* Vérifie si l'allocation de mémoire pour le tableau a réussi */
	if (!table->array)
	{
		free(table);  /* Libère la mémoire allouée pour la table de hachage */
		return (NULL);
	}

	/* Initialise chaque élément du tableau à NULL */
	for (index = 0; index < size; index++)
		table->array[index] = NULL;

	/* Retourne un pointeur vers la table de hachage créée */
	return (table);
}
