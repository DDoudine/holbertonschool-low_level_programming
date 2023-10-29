#include <stdio.h>
#include "main.h"

/**
 * _strlen - entry
 * @s: pointer string
 * Return: index
 */
int _strlen(char *s)
{
	int index = 0;

	while (*s != '\0')
	{
		index++;
		s++;

	}
	return (index);
}

/**
 * string_toupper - entry
 * @s: pointer
 * Return: s
 */
char *string_toupper(char *s)
{
	int index;
	int n = _strlen(s);

	for (index = 0; index < n; index++)
	{
		if (s[index] >= 'a' && s[index] <= 'z')
		{
			/*ascii : 32 en décimal, pour convertir en majuscule*/
			s[index] -= 32;
		}
	}
	return (s);
}
