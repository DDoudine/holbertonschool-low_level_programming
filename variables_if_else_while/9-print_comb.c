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
	for (num = 0; num < 10; num++)
		{
		putchar('0' + num);
		putchar(',');
		putchar(' ');
		}
	return (0);
}

