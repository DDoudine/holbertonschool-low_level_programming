#include <stdio.h>
#include "main.h"

/**
 * print_square - function that prints a square, followed by a new line.
 * @size: Number
 */
void print_square(int size)
{
	int x;

	for (x = 0; x < size; x++)
	{
		putchar('#');
	}

	putchar('\n');
}

