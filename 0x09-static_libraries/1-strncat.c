#include "main.h"

/**
 * _strncat - Concatenates two strings up to n bytes from src
 * @dest: Pointer to the destination string
 * @src: Pointer to the source string
 * @n: Number of bytes to concatenate from src
 *
 * Return: Pointer to the destination string
 */
char *_strncat(char *dest, char *src, int n)
{
    char *ptr = dest;

    while (*ptr)
        ptr++;

    while (*src && n > 0)
    {
        *ptr = *src;
        ptr++;
        src++;
        n--;
    }
    *ptr = '\0';

    return dest;
}
