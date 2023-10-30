#include <stdio.h>
#include "main.h"

/**
 * print_array - afficher les elements d un tableau d entiers
 * @a: tableau d'entiers a afficher
 * @n: nombre d'elements dans le tableau
 *
 */
void print_array(int *a, int n)
{
	int i;
	int tab;

	if (n > 0)
	{
		for (i = 0; i < n - 1; i++)
	{
		tab = *(a + i);
		printf("%d, ", tab);
	}
	tab = *(a + (n - 1));
	printf("%d\n", tab);
	}
	else
	{
		putchar('\n');
	}
}
