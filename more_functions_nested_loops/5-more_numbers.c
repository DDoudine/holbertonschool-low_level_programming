#include <stdio.h>
#include "main.h"

/**
  * more_numbers - Entry
  *
  * Return: 10 times the numbers, from 0 to 14, followed by a new line.
  */

void more_numbers(void)
{
	int number_last, number_10;

	for (number_last = 0; number_last < 10; number_last++)
	{
		for (number_10 = 0; number_10 < 15; number_10++)
		{
			if (number_10 > 9)
			{
				putchar((number_10 / 10) + '0');
			}

			{
			putchar((number_10 % 10) + '0');
			}
		}
	putchar('\n');
	}
}
