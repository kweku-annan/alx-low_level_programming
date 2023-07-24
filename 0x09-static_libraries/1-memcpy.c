#include "main.h"
/**
 * _memcpy - Copies n bytes from memory area src to memory area dest
 * @dest: Pointer to the destination memory area
 * @src: Pointer to the source memory area
 * @n: The number of bytes to copy
 *
 * Return: Pointer to the destination memory area
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
char *d = dest;
char *s = src;
while (n > 0)
{
*d = *s;
d++;
s++;
n--;
}
return (dest);
}
