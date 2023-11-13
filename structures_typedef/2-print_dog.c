#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - Affiche toutes les données d'un chien
 * @d: Une structure de chien
 * %s ==> afficher une chaîne de caractères
 * Return: Rien
 */

void print_dog(struct dog *d)
{
	/*Vérifie si le pointeur d est NULL*/
	if (d == NULL)
		return;

	/*Affiche le nom du chien*/
	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);

	/*Affiche l'âge du chien*/
	if (d->age < 0)
		printf("Age: (nil)\n");
	else
		printf("Age: %f\n", d->age);

	/*Affiche le propriétaire du chien*/
	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}

