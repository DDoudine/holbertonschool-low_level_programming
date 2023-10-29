#include <stdio.h>
#include "main.h"

/**
 * _memset - ecrivez une fonction qui remplit la memoire avec un octet constant
 * @s: pointer
 * @b: character
 * @n: unsigned integer
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char c = b;
	char *ch;

	for (ch = s; n > 0; ++ch, --n)
		*ch = c;
	return (s);
}
