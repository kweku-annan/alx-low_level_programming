#include "main.h"
#include <stdio.h>
/**
*_strspn - Gets the length of a prefix substring
*@s: Input string
*@accept: Input character
*Return: The number of bytes in the initial segment of s.
**/
unsigned int _strspn(char *s, char *accept)
{
unsigned int count = 0;
int match;
int i;
while (*s != '\0')
{
match = 0;
for (i = 0; accept[i] != '\0'; i++)
{
if (*s == accept[i])
{
match = 1;
break;
}
}
if (match == 0)
{
return (count);
}
count++;
s++;
}
return (count);
}
