#include "main.h"

/**
* print_last_digit - Function that returns and prints the value of the last digit
*
* @n: The int we need to get it's last digit
*
* Return: int, the last digit of n
*/

int print_last_digit(int n)
{
	int lastD = (n % 10) > 0 ? (n % 10) : (n % 10) * -1;

	_putchar(lastD + 48);

	return (lastD);
}
