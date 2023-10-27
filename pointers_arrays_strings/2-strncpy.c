#include <stdio.h>
#include "main.h"

/**
 * _strncpy - entry
 * @dest: pointer string
 * @src: pointer string
 * @n: integer
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int index;

	for (index = 0; index < n && src[index] != '\0'; index++)
		dest[index] = src[index];
	for ( ; index < n; index++)
		dest[index] = '\0';
	return (dest);
}

