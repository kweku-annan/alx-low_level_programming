#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenate two input strings into a new string.
 * @s1: Input string one to concatenate.
 * @s2: Input string two to concatenate.
 *
 * Return: Concatenated string, or NULL if allocation fails.
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int i, len1 = 0, len2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	concat = malloc(sizeof(char) * (len1 + len2 + 1));

	if (concat == NULL)
		return (NULL);

	i = 0;
	while (s1[i] != '\0')
	{
		concat[i] = s1[i];
		i++;
	}

	len2 = 0;
	while (s2[len2] != '\0')
	{
		concat[i] = s2[len2];
		i++;
		len2++;
	}

	concat[i] = '\0';

	return (concat);
}
