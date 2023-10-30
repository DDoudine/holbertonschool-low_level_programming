#include <stdio.h>
#include "main.h"

/**
  5  * _strspn - une fonction qui obtient la longueur d'une sous-chaîne de préfixe.
  6  * @s: chaine de caractere entiere
  7  * @accept: liste des caracteres qu on accepte de compter
  8  * Return: s
  9  */

unsigned int _strspn(char *s, char *accept)
{
	char *pointeur_vers_chaine, *pointeur_vers_debut_chaine = s;
	char caractere_courant;

	/* parcourir les caracteres de la chaine */
	/* pour chaque caractere */
	while ((caractere_courant = *s++) != '\0')
	{
		 /*je cherche si c'est dans accept*/
		for (pointeur_vers_chaine = accept; *pointeur_vers_chaine != '\0'; ++pointeur_vers_chaine)
			if (*pointeur_vers_chaine == caractere_courant)
			break;
		/*verifie la correspondance du caractere de la chaine*/
		if (*pointeur_vers_chaine == '\0')
			return (s - pointeur_vers_debut_chaine - 1);
	}
	return (s - pointeur_vers_debut_chaine - 1);
}

