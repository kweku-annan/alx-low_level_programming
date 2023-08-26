#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Read a text file and print to STDOUT.
 * @filename: Name of the text file being read.
 * @letters: Number of letters to be read.
 *
 * Return: The actual number of bytes read and printed.
 *         Returns 0 when the function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t file_desc;
	ssize_t bytes_written;
	ssize_t total_bytes;

	file_desc = open(filename, O_RDONLY);
	if (file_desc == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	total_bytes = read(file_desc, buf, letters);
	bytes_written = write(STDOUT_FILENO, buf, total_bytes);

	free(buf);
	close(file_desc);
	return (bytes_written);
}
