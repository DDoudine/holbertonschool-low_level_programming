#include <stdio.h>
#include "main.h"

/**
 * _memset - ecrivez une fonction qui remplit la memoire avec un octet constant
 * @s: memoire a remplir
 * @b: character a mettre dans la memoire
 * @n: nombre de fois a mettre
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *ch;

	for (ch = s; n > 0; --n)
	{
		*ch = b;
		++ch;
	}
	return (s);
}
