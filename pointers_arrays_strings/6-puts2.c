#include <stdio.h>
#include "main.h"

/**
 * puts2 - prints every other character of a string, starting first character
 * @str: The string containing characters.
 */

void puts2(char *str)
{
	int index = 0;
	int len = 0;

	while (str[index++])
		len++;

	for (index = 0; index < len; index += 2)
		putchar(str[index]);

	putchar('\n');
}

