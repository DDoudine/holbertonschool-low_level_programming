#include "hash_tables.h"

/**
 * hash_table_set - ajoute un élément à la table de hachage
 * @ht: table de hachage
 * @key: clé
 * @value: valeur associée à la clé
 *
 * Return: 1 si réussi, 0 sinon
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    /* Convertit la clé en une séquence d'octets non signés */
    const unsigned char *k = (const unsigned char *)key;
    unsigned long index, i;

    /* Alloue un nouvel élément pour la table de hachage */
    hash_node_t *item = malloc(sizeof(hash_node_t));
    /* Copie la valeur pour éviter les modifications ultérieures non désirées */
    char *copyValue = strdup(value);

    /* Vérifie la validité des paramètres et de l'allocation mémoire */
    if (ht == NULL || key == NULL || value == NULL || item == NULL || copyValue == NULL)
    {
		/*Libère la mémoire allouée si l'une des conditions n'est pas satisfaite*/
        free(item); 
        free(copyValue);
        return (0);
    }

	/* Calcule l'indice où insérer l'élément dans la table de hachage */
    index = key_index(k, ht->size);

	/* Parcourt la liste chaînée pour gérer les collisions */
    for (i = index; ht->array[i]; i++)
    {
		/* Met à jour la valeur si la clé existe déjà */
        if (strcmp(ht->array[i]->key, key) == 0)
        {
            free(ht->array[i]->value);
            free(item);
            ht->array[i]->value = copyValue;
            return (1);
        }
    }

    /* Initialise les champs de l'élément et l'ajoute au début de la liste chaînée */
    item->key = strdup(key);
    if (item->key == NULL)
    {
        free(item->key);
        free(item);
        return (0);
    }
    item->value = copyValue;
    item->next = ht->array[index];
    ht->array[index] = item;

    return (1);
}
