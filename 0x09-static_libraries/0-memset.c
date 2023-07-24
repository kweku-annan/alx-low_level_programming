#include "main.h"

/**
 * _memset - Fills the first n bytes of the memory area pointed
 * to by s with the constant byte c
 * @s: Pointer to the memory area to be filled
 * @c: The byte to be filled
 * @n: The number of bytes to be filled
 *
 * Return: Pointer to the filled memory area
 */
char *_memset(char *s, char c, unsigned int n)
{
    char *ptr = s;

    while (n > 0)
    {
        *ptr = c;
        ptr++;
        n--;
    }
    return s;
}
