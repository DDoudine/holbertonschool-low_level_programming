#include <stdio.h>
#include "main.h"

/**
 *  print_diagonal - function that draws a diagonal line
 *  @number: int
 */
void print_diagonal(int number)
{
	int column;
	int line;

	if (number > 0)
	{

		/* Affiche autant de ligne que le nombre*/
		for (line = 0; line < number; line++)
		{

			/* met un espace en moins que le nombre et affiche un "\" */
			for (column = 0; column < line; column++)
			{
				putchar(' ');
			}
			putchar('\\');

			putchar('\n');

		}
	putchar('\n');
	}
}
