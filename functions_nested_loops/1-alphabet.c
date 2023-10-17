#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - Entry
 *
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
