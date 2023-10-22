#include <stdio.h>
#include "main.h"

/**
 * print_line - Entry
 * @n: Number
 *
 */

void print_line(int n)
{
	int x;

	for (x = 0; x < n; x++)
		{
			putchar('#');
		}

	putchar('\n');

}
