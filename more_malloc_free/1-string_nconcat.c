#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - calcule la longueur d'une chaîne de caractères
 * @s: chaine d'entrée
 * Return: la longueur de la chaine
 */
int _strlen(char *s)
{
	int len = 0;

	for (; *s != '\0'; s++)
	{
		len++;
	}

	return (len);
}

/**
 * string_nconcat - concatene deux chaines jusqu'a n caracteres de la 2e chaine
 * @s1: premiere chaine
 * @s2: deuxieme chaine
 * @n: nombre maximum de caractere a concatener depuis s2
 *
 * Return: la chaine concatenee
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int src_index, dest_index = 0, len_s1, len_s2;
	char *result;

	/*gere les chaînes NULL en les remplacant par des chaines vides*/
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/*calcule les longueurs des chaines d entree*/
	len_s1 = _strlen(s1);
	len_s2 = _strlen(s2);

	/*limite n a la longueur de s2 s il est plus grand*/
	if (n >= len_s2)
		n = len_s2;

	/*alloue de la mémoire pour la chaine concatenee*/
	result = (char *)malloc(len_s1 + n + 1);
	if (result == NULL)
		return (NULL);

	/*copie les caracteres de s1 dans la chaine resultante*/
	for (src_index = 0; src_index < len_s1; src_index++)
	{
		result[dest_index] = s1[src_index];
		dest_index++;
	}

	/*copie jusqu'a n caracteres de s2 dans la chaine resultante*/
	for (src_index = 0; src_index < n; src_index++)
	{
		result[dest_index] = s2[src_index];
		dest_index++;
	}

	/*termine la chaine concatenee par un caractere nul*/
	result[dest_index] = '\0';

	return (result);
}

