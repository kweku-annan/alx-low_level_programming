#include <stdio.h>
#include <string.h>
#include "main.h"
/**
*_strcpy - Copies a string
*@dest: input character
*@src: input character
*Return: A character (dest)
**/
char *_strcpy(char *dest, char *src)
{
char *dest_start = dest;
while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';
return (dest_start);
}
