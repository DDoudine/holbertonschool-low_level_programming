#include <stdio.h>
#include "main.h"

/**
 * _strchr - une fonction qui localise un caractère dans une chaîne.
 * @s: pointer
 * @c: character
 * Return: character or NULL
 */
char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
		{
			return (s);
		}
	} while (*s++);
	return (0);
}
