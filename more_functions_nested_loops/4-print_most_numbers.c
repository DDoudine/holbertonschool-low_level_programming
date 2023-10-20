#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - Entry
 *
 */
void print_most_numbers(void)
{
int num = 0;
while (num < 10)
{
if (num != 2 && num != 4)
{
putchar('0' + num);
}
num++;
}
putchar('\n');
}
