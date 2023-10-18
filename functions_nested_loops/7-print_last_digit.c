#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - Entry
 * @n: number
 *
 * Return: Number
 */

int print_last_digit(int n)
{
	int last;

	last = n % 10;

	if (last < 0)
	{
		last = last * -1;
	}

	return (last);
}
