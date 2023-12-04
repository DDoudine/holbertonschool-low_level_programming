#include "main.h"

/**
 * binary_to_uint - convertit un nombre binaire en entier non signé
 * @b: nombre binaire
 *
 * Return: nombre converti ou 0 en cas d'échec
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0;
	int power = 1, index;

	/*Vérifie si la chaîne binaire est nulle*/
	if (b == NULL)
		return (0);

	/*Vérifie chaque caractère de la chaîne binaire*/
	for (index = 0; b[index] != '\0'; index++)
	{
		/*Si le caractère n'est ni '0' ni '1', la chaîne est invalide*/
		if (b[index] != '0' && b[index] != '1')
			return (0);
	}
	/*Décrémente i pour pointer le dernier caractère de la chaîne binaire*/
	i -= 1;
	/*Parcourt la chaîne de droite à gauche*/
	for (; index >= 0; index--)
	{
		/*Si le bit est '1', ajoute la puissance de 2 correspondante à la somme*/
		if (b[index] == '1')
			sum += power;

		/*Multiplie bin par 2 pour la puissance de 2 suivante*/
		power = power * 2;
	}
	/*Renvoie la somme convertie ou 0 en cas d'échec*/
	return (sum);
}
