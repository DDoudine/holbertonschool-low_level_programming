#include <stdio.h>
#include "main.h"

/**
 * _pow_recursion - calcule la puissance d un nombre de maniere recursive
 * @x: base de la puissance
 * @y: exposant
 * Return: le resultat de x eleve a la puissance y
 */
int _pow_recursion(int x, int y)
{
	if (y > 0)
	{	/*recursion pour les puissances positives*/
		return (x * _pow_recursion(x, y - 1));
	}
	else if (y < 0)
	{	/*valeur indefinie pour les exposants neg*/
		return (-1);
	}
	else
	{	/*tout nombre eleve a la puissance 0 est egal a 1*/
		return (1);
	}
}
