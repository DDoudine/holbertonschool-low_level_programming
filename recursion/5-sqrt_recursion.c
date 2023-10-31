#include <stdio.h>
#include "main.h"

/**
 * square - recherche la racine carrée de manière récursive.
 * @a: Entier dont on cherche la racine carrée.
 * @r: Supposition de la racine carrée.
 * Return: Racine carrée (Succès) ou -1 si non entière.
 */
int square(int a, int r)
{
	int res = r * r;

	/*si est egal au nombre, on a trouve la racine carree*/
	if (res == a)
	{
		return (r);
	}
	/*si est < au nombre, la racine carree n est pas entiere*/
	if (res > a)
	{
		return (-1);
	}
	/*sinon, on continue la recherche en augmentant la supposition*/
	return (square(a, r + 1));
}

/**
 * _sqrt_recursion - calcule la racine carrée.
 * @n: Nombre dont on cherche la racine carrée.
 * Return: Racine carrée (Succès) ou -1 si non entière.
 */
int _sqrt_recursion(int n)
{
	/*appel la fonction square avec 1 comme supposition initiale*/
	return (square(n, 1));
}
