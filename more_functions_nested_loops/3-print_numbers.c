#include <stdio.h>
#include "main.h"

/**
 * print_numbers - Entry
 * Return: 0
 */

void print_numbers(void)
{
char num = 0;
while (num < 10)
{
putchar('0' + num);
num++;
}
putchar('\n');
}
