#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

/* Function to read text from a file and print it to stdout */
ssize_t read_textfile(const char *filename, size_t letters);

/* Custom putchar function */
int _putchar(char c);

/* Function to create a new file with specified content */
int create_file(const char *filename, char *text_content);

/* Function to append text to an existing file */
int append_text_to_file(const char *filename, char *text_content);

#endif /* MAIN_H */
