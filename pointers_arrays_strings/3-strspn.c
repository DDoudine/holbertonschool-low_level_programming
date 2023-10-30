#include <stdio.h>
#include "main.h"

/**
  * _strspn - une fonction qui obtient la long d'une ss-chaîne de préfixe
  * @s: chaine de caractere entiere
  * @accept: liste des caracteres qu on accepte de compter
  * @PointeurVChaine: Pointeur vers chaine
  * Return: s
  */

unsigned int _strspn(char *s, char *accept)
{
	char *PointeurVChaine, *PointeurVersDebutChaine = s;
	char CaractereCourant;

	/* parcourir les caracteres de la chaine */
	/* pour chaque caractere */
	while ((CaractereCourant = *s++) != '\0')
	{
		 /*je cherche si c'est dans accept*/
		for (PointeurVChaine = accept; *PointeurVChaine != '\0'; ++PointeurVChaine)
			if (*PointeurVChaine == CaractereCourant)
			break;
		/*verifie la correspondance du caractere de la chaine*/
		if (*PointeurVChaine == '\0')
			return (s - PointeurVersDebutChaine - 1);
	}
	return (s - PointeurVersDebutChaine - 1);
}

