#include <stdio.h>
#include "main.h"

/**
 * _strlen - Entry
 * @s: string
 * len: length
 * Return: 0
 */
int _strlen(char *s)
{
	int len = 0;

	for (*s != '\0'; s++)
	{
		len++;
	}

	return (len);
}
