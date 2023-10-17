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
	for (num = 0; num <= 9; num++)
		{
		putchar('0' + num);
		putchar(',');
		}
	return (0);
}
