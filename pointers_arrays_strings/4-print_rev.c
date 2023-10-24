#include <stdio.h>
#include "main.h"

/**
 * print_rev - function that prints a string in reverse, followed by a new line
 * @s: string print
 */
void print_rev(char *s)
{
	int rev = 0;

	while (s[rev] != '\0')
	{
		rev++;
	}

	for (rev -= 1; rev >= 0; rev--)
	{
		putchar(s[rev]);
	}

	putchar('\n');
}
