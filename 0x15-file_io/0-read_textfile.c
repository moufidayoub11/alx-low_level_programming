#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters the
 *           function should read and print.
 *
 * Return: 0 if failed, the number of bytes printed.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	int fd;
	ssize_t read_bytes;
	ssize_t printed_bytes;


	buffer = (char *)malloc(letters);

	if (buffer == NULL)
	{
		return (0);
	}

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	read_bytes = read(fd, buffer, letters);
	if (read_bytes == -1)
		return (0);

	printed_bytes = write(STDOUT_FILENO, buffer, read_bytes);

	if (printed_bytes != read_bytes)
		return (0);

	close(fd);

	return (printed_bytes);
}
