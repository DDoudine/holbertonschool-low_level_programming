#include <stdio.h>
#include "main.h"

/**
 * _strcmp - entry
 * @s1: pointer string
 * @s2: pointer string
 *
 * Return: result of _strcmp
 */
int _strcmp(char *s1, char *s2)
{
	while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	if (*s1 == *s2)
	{
		return (0);
	}
	else
	{
		return (*s1 - *s2);
	}
}
