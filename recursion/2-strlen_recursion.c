#include <stdio.h>
#include "main.h"

/**
 * _strlen_recursion - calcul long d une chaine de caract de maniere recursive
 * @s: pointeur vers la chaine de caracteres
 * Return: la longueur de la chaine
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		/*fin de la chaine, longueur 0*/
		return (0);
	}
	/*compte le caractere actuel et appelle recursivement*/
	return (1 + _strlen_recursion(s + 1));
}

