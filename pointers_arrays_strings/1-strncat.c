#include <stdio.h>
#include "main.h"

/**
 * _strlen - entry
 * @s: string
 * len: length
 * Return: 0
 */
int _strlen(char *s)
{
	int len = 0;

	for (; *s != '\0'; s++)
	{
		len++;
	}

	return (len);
}

/**
 * _strncat - entry
 * @dest: pointer string
 * @src: pointer string
 * @n: integer
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int len = _strlen(dest);
	int index;

	for (index = 0; index < n && src[index] != '\0'; index++)
	{
		dest[len + index] = src[index];
	}
	dest[len + index] = '\0';
	return (dest);
}

