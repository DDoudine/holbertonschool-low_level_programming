#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - Entry
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int index = 0;

	while (index < 10)

	{
		char letter;

		for (letter = 'a'; letter <= 'z'; ++letter)
		{
			putchar(letter);
		}
	putchar('\n');
	index++;
	}
}
