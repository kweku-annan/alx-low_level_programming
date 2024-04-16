#include "main.h"
#include <stdio.h>
/**
*_strchr - Locates a character in a string
*@s: Input string
*@c: Input character
*Return: A pointer to the first occurrence of the character c in the string s
**/
char *_strchr(char *s, char c)
{
	if (c == '\0' || c == NULL)
		return (NULL);
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
	{
		return (s);
	}
	return (NULL);
}
