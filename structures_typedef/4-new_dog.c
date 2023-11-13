#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - Duplique une chaîne de caractères
 * @str: Chaîne à copier
 * Return: Pointeur vers la new chaîne identique à str, NULL si str = NULL
 */

char *_strdup(char *str)
{
	char *string_copy;
	int index;
	int len;

	/*Vérifie si la chaîne source est NULL*/
	if (str == NULL)
		return (NULL);

	/*Calcule la longueur de la chaîne source*/
	for (index = 0; str[index] != '\0'; index++)
	{
		;
	}

	/*Alloue dynamiquement de la mémoire pour la copie de la chaîne*/
	string_copy = malloc(index * sizeof(char) + 1);
	if (string_copy == NULL)
		return (NULL);

	/*Copie les caractères de la chaîne source vers la nouvelle chaîne*/
	for (len = 0; len <= index; len++)
	{
		string_copy[len] = str[len];
	}
	return (string_copy);
}

/**
 * new_dog - Crée une nouvelle structure dog_t (représentant un chien)
 * @name: Nom du chien
 * @age: Âge du chien
 * @owner: Propriétaire du chien
 * Return: Pointeur vers la nouvelle structure dog_t, NULL en cas d'échec
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	char *new_name, *new_owner;
	dog_t *newdog;

	 /*Alloue dynamiquement de la mémoire pour la structure dog_t*/
	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
		return (NULL);

	/*Alloue dynamiquement de la mémoire et copie le nom du chien*/
	new_name = _strdup(name);
	if (new_name == NULL)
	{
		free(newdog);
		return (NULL);
	}

	/*Alloue dynamiquement de la mémoire et copie le propriétaire du chien*/
	new_owner = _strdup(owner);
	if (new_owner == NULL)
	{
		free(new_name);
		free(newdog);
		return (NULL);
	}

	/*Initialise les membres de la structure dog_t*/
	newdog->name = new_name;
	newdog->age = age;
	newdog->owner = new_owner;

	return (newdog);
}

