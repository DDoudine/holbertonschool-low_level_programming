#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - cherche ds une chaîne l'un des éléments d'un ensemble d'octets
 * @s: pointer
 * @accept: pointer
 *
 * Return: character or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	/*parcourir la chaîne s, caractère par caractère*/
	while (*s != '\0')
	{
		/*parcourt la chaîne accept caractère par caractère*/
		char *a = accept;

		/*compare le caract chaîne accept (*a) avec le caract de la chaîne s (*s)*/
		while (*a != '\0')
		{
			/*incrémente le pointeur s pour passer au caractère suivant*/
			if (*a++ == *s)
				return (s);
		}
		++s;
	}
	return (NULL);
}
