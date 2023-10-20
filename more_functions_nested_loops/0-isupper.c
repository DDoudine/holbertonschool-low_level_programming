#include <stdio.h>
#include "main.h"

/**
 * _isupper - Entry
 * @c: character
 *
 * Return: 0
 */

int _isupper(int c)
	{
	if (c >= 'a' && c <= 'z')
		{
		return (1);
		}
		else
		{
		return (0);
		}
	}
