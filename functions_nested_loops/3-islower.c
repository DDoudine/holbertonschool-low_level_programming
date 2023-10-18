#include <stdio.h>
#include "main.h"
#include <ctype.h>

/* more headers goes there */

/**
 * _islower - Entry
 * @c: character
 *
 * Return: 0
 */
int test_islower(int c)
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
