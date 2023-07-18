#include "main.h"

/**
* times_table  - Function that prints the time table of 9
*
* Return: void, this function does't return any value
*/

void times_table(void)
{
	int i;
	int j;
	int res;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			res = i * j;

			if (j != 0)
			{
				_putchar(',');
				_putchar(' ');

				if (res < 10)
					_putchar(' ');
				else
					_putchar(res / 10 + '0');
			}

			_putchar(res % 10 + '0');
		}

		_putchar('\n');
	}
}
