#include <stdio.h>
#include "main.h"

/**
 * _print_rev_recursion - affich une chain de caracteres sens invers(recursive)
 * @s: Pointeur vers la chaîne de caractères.
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
	/*appel récursif avec le caractère suivant*/
	_print_rev_recursion(s + 1);
	/*affichage du caractere actuel lors de la remontee*/
	putchar(*s);
	}
}

