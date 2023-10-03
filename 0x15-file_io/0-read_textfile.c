#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to the POSIX stdout
 * @filename: The text file the function reads from
 * @letters: The number of letters it should read and print
 *
 * Return: The actual number of letters it could read and print
 **/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t bytes_written;
	ssize_t bytes_read;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = (char *)malloc(letters + 1);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	bytes_read = read(fd, buffer, letters);
	if (bytes_read == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	buffer[bytes_read] = '\0';

	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	free(buffer);
	close(fd);

	if (bytes_written == -1 || (size_t)bytes_written != (size_t)bytes_read)
		return (0);

	return (bytes_read);
}
