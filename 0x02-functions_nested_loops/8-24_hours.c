#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * starting from 00:00 to 23:59
 *
 * This function prints every minute of the day of Jack Bauer,
 * starting from  It does this by using a nested
 * loop to iterate through all possible values of hours and minutes
 * and printing them in the format "HH:MM", with a newline character
 * at the end of each line.
 */
void jack_bauer(void)
{
int hour, minute;

hour = 0;

/* Loop through all hours */
while (hour < 24)
{
minute = 0;

/* Loop through all minutes */
while (minute < 60)
{
/* Print the hour and minute in the format "HH:MM" */
_putchar((hour / 10) + '0');
_putchar((hour % 10) + '0');
_putchar(':');
_putchar((minute / 10) + '0');
_putchar((minute % 10) + '0');
_putchar('\n');

minute++;
}

hour++;
}
}

