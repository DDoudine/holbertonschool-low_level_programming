#include <stdio.h>
#include "main.h"

/**
 * reverse_array - entry
 * @a: pointer
 * @n: integer
 */
void reverse_array(int *a, int n)
{
	int index;
	int entier;

	n = n - 1;

	for (index = 0; index < n; index++, n--)
	{
		entier = a[index];
		a[index] = a[n];
		a[n] = entier;
	}
}

