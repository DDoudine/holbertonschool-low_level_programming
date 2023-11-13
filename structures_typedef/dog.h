#ifndef DOG_H
#define DOG_H
#include <stdio.h>

/**
 * struct dog - Définition de la structure pour représenter un chien
 * @name: Nom du chien - char *
 * @age: Âge du chien - float
 * @owner: Propriétaire du chien - char *
 *
 * Description : Informations sur le chien
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/* Alias pour faciliter l'utilisation de la structure*/
typedef struct dog;

/*Prototypes des fonctions pour travailler avec la structure dog*/
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif

