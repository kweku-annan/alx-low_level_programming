#ifndef MAIN_H
#define MAIN_H

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * read_textfile - Reads and prints the content of a file.
 * @filename: Name of the file to read.
 * @letters: Number of letters to read and print.
 * Return: Number of letters read and printed, or -1 on failure.
 */
ssize_t read_textfile(const char *filename, size_t letters);

/**
 * create_file - Creates a file with the given content.
 * @filename: Name of the file to create.
 * @text_content: Content to write into the file.
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content);

/**
 * append_text_to_file - Appends text to an existing file.
 * @filename: Name of the file to append to.
 * @text_content: Content to append to the file.
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content);

#endif /* MAIN_H */
