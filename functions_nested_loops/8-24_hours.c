#include <stdio.h>
#include "main.h"

/**
 * jack_bauer - Entry
 *
 *
 *
 *
 */

void jack_bauer(void)
{
	int hour;

	for (hour = 0; hour < 24; ++hour)
	{
		int minute;

		for (minute = 0; minute < 60; ++minute)
		{
			int minute_last;
			int minute_10;
			int hour_last;
			int hour_10;

			hour_last = hour % 10;
			hour_10 = hour / 10;

			putchar(hour_10 + '0');
			putchar(hour_last + '0');

			putchar(':');

			minute_last = minute % 10;
			minute_10 = minute / 10;

			putchar(minute_10 + '0');
			putchar(minute_last + '0');
			putchar('\n');
		}
	}
}
