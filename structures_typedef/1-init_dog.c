#include "dog.h"
#include <stdio.h>

/**
 * init_dog - Initialise les informations d'un chien
 * @d: Pointeur vers une structure de type dog
 * @name: Nom du chien - chaîne de caractères
 * @age: Âge du chien - nombre flottant
 * @owner: Propriétaire du chien - chaîne de caractères
 *
 * Description : Initialise une variable de type struct dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	 /*Vérifie si le pointeur d n'est pas NULL*/
	if (d != NULL)
	{
		/*Initialise les membres de la structure avec les valeurs fournies*/
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

