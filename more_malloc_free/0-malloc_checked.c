#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - une fonction qui alloue de la mémoire à l'aide de malloc.
 * @b: unsigned integer
 *
 * Return: pointer
 */

void *malloc_checked(unsigned int b)
{
	int *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}

