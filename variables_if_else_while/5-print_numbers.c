#include <stdio.h>

/**
 * main - Entry
 *
 * Return: 0
 */

int main(void)
{
char num = 0;
while (num < 10)
{
putchar('0' + num);
num++;
}
putchar('\n');
return (0);
}
