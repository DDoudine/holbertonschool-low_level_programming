#include <stdio.h>
#include "main.h"

/**
 * print_square - function that prints a square, followed by a new line.
 * @size: Number
 */
void print_square(int size)
{
	int column;
	int line;

	/* Affiche autant de ligne que size*/
	for (line = 0; line < size; line++)
	{
		/* Affiche une ligne, avec autant de # que size*/
		for (column = 0; column < size; column++)
		{
			putchar('#');
		}
		putchar('\n');
	}
}

