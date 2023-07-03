#include "main.h"
#include <stdio.h>
/**
*_memcpy - A function that copies memory area
*@dest: Input character
*@src: Input character
*@n: unsigned int
*Return: Return a pointer to dest
**/
char *_memcpy(char *dest, char *src, unsigned int n)
{
char *ptr_dest = dest;
char *ptr_src = src;
while (n > 0)
{
*ptr_dest = *ptr_src;
ptr_dest++;
ptr_src++;
n--;
}
return (dest);
}
