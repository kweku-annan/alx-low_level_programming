#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - Duplicate a string to a new memory space.
 * @str: Pointer to the string to duplicate.
 *
 * Return: Pointer to the duplicated string, or NULL if allocation fails.
 */
char *_strdup(char *str)
{
	char *duplicate;
	int length = 0, i;

	if (str == NULL)
		return (NULL);

	/* Calculate the length of the input string */
	while (str[length] != '\0')
		length++;

	duplicate = malloc(sizeof(char) * (length + 1));

	if (duplicate == NULL)
		return (NULL);

	/* Copy the characters from the input string to the duplicate */
	for (i = 0; str[i]; i++)
		duplicate[i] = str[i];

	duplicate[i] = '\0';

	return (duplicate);
}
