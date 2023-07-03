#include "main.h"
#include <stdio.h>
/**
*_memset - Fills memory with a constant byte
*@s: Input character
*@b: Input character
*@n: Input character
*Return: A pointer to the memory area.
**/
char *_memset(char *s, char b, unsigned int n)
{
char *ptr = s;
while (n > 0)
{
*ptr = b;
ptr++;
n--;
}
return (s);
}
