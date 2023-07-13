#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A program that prints
 * "and that piece of art is useful\" - Dora Korpar, 2015-10-19"
 * using the C standard function putchar.
 *
 * Return: 0 if successful
 */

int main(void)
{
	char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	int i;

	for (i = 0; message[i] != '\0'; i++)
	{
		putchar(message[i]);
	}

	putchar('\n');

	return (0);
}
