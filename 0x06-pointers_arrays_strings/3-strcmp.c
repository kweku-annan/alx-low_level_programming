#include "main.h"
#include <stdio.h>
/**
*_strcmp - Compares two functions
*@s1: Input character
*@s2: Input character
*Return: An integer
**/
int _strcmp(char *s1, char *s2)
{
while (*s1 != '\0' || *s2 != '\0')
{
if (*s1 < *s2)
{
return (-(*s2 - *s1));
}
else if (*s1 > *s2)
{
return (*s1 - *s2);
}
s1++;
s2++;
}
return (0);
}
