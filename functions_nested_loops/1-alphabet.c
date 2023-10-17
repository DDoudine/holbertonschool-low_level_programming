#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_minuscule - Entry
 *
 * Return: 0
 */
void print_alphabet_minuscule(void)
{
	int letter;
	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	return;
}
