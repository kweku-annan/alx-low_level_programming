#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenate all input strings into a single string.
 * @ac: Number of arguments.
 * @av: Array of strings (arguments).
 *
 * Return: Pointer to the concatenated string, or NULL if allocation fails.
 */
char *argstostr(int ac, char **av)
{
	int i, j, len = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	/* Calculate the total length required for the new string */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			len++;
	}

	/* Add space for newline characters and the null terminator */
	len += ac;

	str = malloc(sizeof(char) * (len + 1));

	if (str == NULL)
		return (NULL);

	/* Copy the characters from each input string into the new string */
	len = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			str[len] = av[i][j];
			len++;
		}

		/* Add a newline character after each argument */
		str[len] = '\n';
		len++;
	}

	/* Add the null terminator at the end */
	str[len] = '\0';

	return (str);
}
