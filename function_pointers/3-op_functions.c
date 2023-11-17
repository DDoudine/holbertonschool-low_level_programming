#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - addition
 * @a: entier
 * @b: entier
 * Return: Somme de a et b
*/

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - soustraction
 * @a: entier
 * @b: entier
 * Return : différence de a et b
*/

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplication
 * @a: entier
 * @b: entier
 * return: produit de a et b
*/

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division
 * @a: entier
 * @b: entier
 * Return: résultat de la division de a par b
*/

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - modulo
 * @a: entier
 * @b: entier
 * Return: reste de la division de a par b
*/

int op_mod(int a, int b)
{
	return (a % b);
}
