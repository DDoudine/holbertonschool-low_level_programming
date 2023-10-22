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

	if (n <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (x = 0; x < n; x++)
		{
			putchar('_');
		}

		putchar('\n');
	}
}
