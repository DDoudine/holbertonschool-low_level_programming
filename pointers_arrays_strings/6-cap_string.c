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
 * cap_string - entry
 * @s: pointer
 * Return: s
 */
char *cap_string(char *s)
{
	int index;
	int j;
	int n = _strlen(s);

	for (index = 0; index < n; index++)
	{
		if (s[index] >= 'a' && s[index] <= 'z')
		{
			j = index - 1;

			/* Si le caractère est un espace, tabulation ou retour à la ligne,*/
			/* le prochain caractère est le début d'un nouveau mot.*/
			if (s[j] == ' ' || s[j] == '\t' || s[j] == '\n' || index == 0)
				s[index] -= 32;
			if (s[j] == '.' || s[j] == ',' || s[j] == ';' || s[j] == '!' || s[j] == '?')
				s[index] -= 32;
			if (s[j] == '"' || s[j] == '(' || s[j] == ')' || s[j] == '{' || s[j] == '}')
				s[index] -= 32;
		}
	}
	return (s);
}
