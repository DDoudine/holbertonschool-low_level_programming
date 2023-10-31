#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - affiche une chaine de caractere de manière recursive
 * @s: pointeur vers la chaine de caractere
 */
void _puts_recursion(char *s)
{

	if (*s == '\0')
	{
		/*Si le caract actuel est '\0', saut de ligne et termine la récursion*/
		putchar('\n');
		return;
	}
	/*affiche le caractère actuel*/
	putchar(*s);
	/*appelle récursivement la fonction avec le caractère suivant*/
	_puts_recursion(s + 1);
}

