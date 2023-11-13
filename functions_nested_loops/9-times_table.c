#include <stdio.h>
#include "main.h"

/**
 * times_table - Entry
 * @n: number
 *
 * Return: Number
 */

void times_table(void)
{
        int last;

        last = n % 10;

        if (last < 0)
        {
                last = last * -1;
        }

        _putchar(last + '0');

        return (last);
}

