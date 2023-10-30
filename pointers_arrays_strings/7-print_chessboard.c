#include <stdio.h>
#include "main.h"

/**
 * print_chessboard - affiche un echequier
 * @a: tableau a deux dimensions representant l'echequier
 * @row: rangees de l'echequier
 * @col: colonnes de l'echequier
 */
void print_chessboard(char (*a)[8])
{
	int row;
	int col;

	/*parcourir les rangees*/
	for (row = 0; row < 8; row++)
	{
		/*parcourir les colonnes*/
		for (col = 0; col < 8; col++)
		{
			printf("%c", a[row][col]);
		}
		printf("\n");
	}
}
