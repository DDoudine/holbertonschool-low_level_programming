#include <stdio.h>
#include "main.h"

/**
 * factorial - calcule le factoriel d un nombre de maniere recursive
 * @n: entier en entree
 * Return: le factoriel de n (ou -1 pour les valeurs negatives)
 */
int factorial(int n)
{
	if (n == 0)
	/*factoriel de 0 est 1*/
	return (1);

	else if (n < 0)
	/*valeur indéfinie pour les nombres negatifs*/
	return (-1);

	/*Appel recursif pour le factoriel*/
	return (n * factorial(n - 1));
}

