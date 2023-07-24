#include "main.h"

/**
 * _strstr - Locates a substring
 * @haystack: Pointer to the string to search in
 * @needle: Pointer to the substring to search for
 *
 * Return: Pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
    char *h, *n;

    while (*haystack)
    {
        h = haystack;
        n = needle;

        while (*haystack && *n && *haystack == *n)
        {
            haystack++;
            n++;
        }

        if (*n == '\0')
            return h;

        haystack = h + 1;
    }

    return NULL;
}
