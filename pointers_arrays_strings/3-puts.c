#include <stdio.h>
#include "main.h"

/**
 * _puts - Entry
 * @str: string print
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		putchar(*str);
	}

	putchar('\n');
}
