#include <stdio.h>
#include "main.h"

/**
 * compare - compare deux chaines de caractères
 * @c1: pointeur vers la 1er chaine
 * @c2: pointeur vers la deuxieme chaine
 *
 * Return: 0 si les chaînes sont différentes, 1 si elles sont identiques
 */
int compare(char *c1, char *c2)
{
	while (*c1 && *c2)
	{
		if (*c1 != *c2)
		{
			return (0);
		}
		c1++;
		c2++;
	}
	return (*c2 == '\0');
}

/**
 * _strstr - fonction qui localise une sous-chaîne
 * @haystack: pointeur vers la chaine principale
 * @needle: pointeur vers la sous-chaine à rechercher
 *
 * Return: character or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	char *hay = haystack;
	char *nee = needle;

	/*parcourt la chaine*/
	while (*hay != '\0')
	{
		/*comparer les chaînes*/
		if (*hay == *nee && compare(hay, nee) != 0)
		{
			return (hay);
		}
		/*continue a parcourir la chaîne*/
		else if (compare(hay, nee) != 0)
		{
			return (hay);
		}
		hay++;
	}
	return (NULL);
}
