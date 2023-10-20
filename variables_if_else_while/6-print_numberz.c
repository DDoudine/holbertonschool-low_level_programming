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
while (num < 10)
	{
	putchar('0' + num);
	num++;
	}
putchar('\n');
return (0);
}
