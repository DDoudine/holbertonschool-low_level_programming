#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_minuscule - Entry
 * Function print_alphabet
 * Return: 0
 */
void print_alphabet(void)
{
	int letter;

	for (letter = 'a'; letter <= 'z'; letter++)

	{
		putchar(letter);
	}
	putchar('\n');
}
