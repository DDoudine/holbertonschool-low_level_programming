#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - une fonction qui alloue de la mémoire à l'aide de malloc
 * @b: taille de la memoire a allouer
 *
 * Return: pointeur ver la memoire allouee
 */

void *malloc_checked(unsigned int b)
{
	 /*alloue de la memoire de la taille specifiee*/
	int *ptr = malloc(b);

	/*Verifie si l allocation a echoue (pointeur NULL)*/
	if (ptr == NULL)
		exit(98);/*en cas d echec, code d erreur 98*/

	return (ptr);/*retourne un pointeur vers la memoire allouee en cas de succes*/
}

