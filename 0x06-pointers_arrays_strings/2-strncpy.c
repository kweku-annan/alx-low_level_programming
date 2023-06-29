#include "main.h"
#include <stdio.h>
/**
*_strncpy - Copies a string
*@dest: Input character
*@src: Input character
*@n: Input int
*Return: Copy of a string
**/
char* _strncpy(char* dest, char* src, int n)
{
int i;
for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[i] = src[i];
}
for (; i < n; i++)
{
dest[i] = '\0';
}
return (dest);
}
