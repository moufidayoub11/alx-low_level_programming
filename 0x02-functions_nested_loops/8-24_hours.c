#include "main.h"

/**
* jack_bauer  - Function that prints every minute of the day (00:00 to 23:59)
*
* Return: void, this function does't return any value
*/

void jack_bauer(void)
{

	int i;
	int j;

	/*
	 * These variables are used to parse a pair numbers so we can print
	 * using putchar
	 */
	int hourTens;
	int hourOnes;
	int minuteTens;
	int minuteOnes;

	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 60; j++)
		{
			hourTens = i / 10;
			hourOnes = i % 10;

			minuteTens = j / 10;
			minuteOnes = j % 10;

			_putchar(hourTens);
			_putchar(hourOnes);
			_putchar(':');
			_putchar(minuteTens);
			_putchar(minuteOnes);

			_putchar('\n');
		}
	}
}
