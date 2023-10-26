#include <stdio.h>
#include "main.h"

/**
 * print_array - function that prints n elements of an array of integers
 * @str: string print
 */

void print_array(int *a, int n);
{
	int index = 0;
	int len = 0;
	int n;

	while (str[len] != '\0')
		len++;

	if (len % 2 == 0)
		n = len / 2;

	else
		n = (len + 1) / 2;

	for (index = n; index < len; index++)
		putchar(str[index]);

	putchar('\n');
}
