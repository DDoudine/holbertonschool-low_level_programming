#include <stdio.h>

/**
 * main-Entry
 *
 * Return: 0
 */
int main(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
putchar(letter);
if (letter != 'e' && letter != 'q')
continue;
putchar(letter);
putchar ('\n');

return (0);
}
