#include <stdio.h>
/* more headers goes there */

/**
 * main - Entry
 *
 * Return: 0
 */
int main(void)
{
int num = 0;
char letter;
	for (num = 0; num <= 9; num++)
		{
		putchar('0' + num);
		}
	for (letter = 'a'; letter <= 'f'; letter++)
		{
		putchar(letter);
		}
	putchar('\n');
	return (0);
}
