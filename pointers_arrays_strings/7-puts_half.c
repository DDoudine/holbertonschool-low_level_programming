#include <stdio.h>
#include "main.h"

/**
 * puts_half - prints half of a string.
 * @str: string print
 */

void puts_half(char *str)
{
	int index = 0;
	int len = 0;
	int n;

	while (str[len] != '\0')
		len++;

	if (len % 2 == 0)
		n = len / 2;

	else
		n = (len + 1) / 2;

	for (index = n; index < len; index++)
		putchar(str[index]);

	putchar('\n');
}
