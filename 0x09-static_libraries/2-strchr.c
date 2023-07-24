#include "main.h"
/**
 * _strchr - Locates the first occurrence of the character c
 * in the string pointed to by s
 * @s: Pointer to the string to be searched
 * @c: The character to be located
 *
 * Return: Pointer to the first occurrence of c in s, or NULL if not found
 */
char *_strchr(char *s, char c)
{
while (*s)
{
if (*s == c)
return (s);
s++;
}
if (c == '\0')
return (s);
return (NULL);
}
