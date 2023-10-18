#include <stdio.h>
#include "main.h"
#include <ctype.h>

/* more headers goes there */

/**
 * _isalpha - Entry
 * @c: character
 *
 * Return: 0
 */

int _isalpha(int c)
{
	int isalpha = 0;

	if (c >= 'a' && c <= 'z')
	{
		isalpha = 1;
	}

	if (c >= 'A' && c <= 'Z')
	{
		isalpha = 1;
	}

	return (isalpha);
}
