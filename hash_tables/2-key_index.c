#include "hash_tables.h"

/**
 * key_index - donne l'indice d'une clé dans la table de hachage
 * @key: clé
 * @size: taille du tableau de la table de hachage
 *
 * Return: indice d'une clé
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	/* Appelle la fonction de hachage djb2 pour obtenir une valeur de hachage */
	unsigned long int index = hash_djb2(key);

	/* Calcule l'indice en prenant le reste de la division*/
	/* de la valeur de hachage par la taille */
	return (index % size);
}
