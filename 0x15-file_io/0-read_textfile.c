#include "main.h"
#include <stdlib.h>

/**
 * read_text - Read a text file and print to standard output.
 * @file_name: Name of the text file to be read.
 * @num_letters: Number of letters to be read.
 *
 * Return: The actual number of bytes read and printed.
 *         Returns 0 when the function fails or file_name is NULL.
 */
ssize_t read_text(const char *file_name, size_t num_letters)
{
	char *buffer;
	ssize_t file_descriptor;
	ssize_t bytes_written;
	ssize_t total_bytes;

	file_descriptor = open(file_name, O_RDONLY);
	if (file_descriptor == -1)
		return (0);

	buffer = malloc(sizeof(char) * num_letters);
	total_bytes = read(file_descriptor, buffer, num_letters);
	bytes_written = write(STDOUT_FILENO, buffer, total_bytes);

	free(buffer);
	close(file_descriptor);
	return (bytes_written);
}
