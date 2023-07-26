#include "main.h"
#include <stdio.h>

/**
 * print_line - Prints 'bytes_to_print' bytes of a buffer.
 * @buffer: Pointer to the buffer to print.
 * @bytes_to_print: Number of bytes from the buffer to print.
 * @line_num: The line number of the buffer to print.
 *
 * Return: void
 */
void print_line(char *buffer, int bytes_to_print, int line_num)
{
	int j, k;

	for (j = 0; j <= 9; j++)
	{
		if (j <= bytes_to_print)
			printf("%02x", buffer[line_num * 10 + j]);
		else
			printf("  ");

		if (j % 2)
			putchar(' ');
	}

	for (k = 0; k <= bytes_to_print; k++)
	{
		if (buffer[line_num * 10 + k] > 31 && buffer[line_num * 10 + k] < 127)
			putchar(buffer[line_num * 10 + k]);
		else
			putchar('.');
	}
}

/**
 * print_buffer - Prints a buffer.
 * @buffer: Pointer to the buffer to print.
 * @size: Size of the buffer.
 *
 * Return: void
 */
void print_buffer(char *buffer, int size)
{
	int i;

	for (i = 0; i <= (size - 1) / 10 && size; i++)
	{
		printf("%08x: ", i * 10);

		if (i < size / 10)
		{
			print_line(buffer, 9, i);
		}
		else
		{
			print_line(buffer, size % 10 - 1, i);
		}

		putchar('\n');
	}

	if (size == 0)
	{
		putchar('\n');
	}
}
