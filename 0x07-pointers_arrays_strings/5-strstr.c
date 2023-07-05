#include "main.h"
#include <stdio.h>
#include <string.h>
/**
*_strstr - finds the first occurence of the substr needle in the str haystack
*@haystack: input string
*@needle: input stringj
*Return: NULL
**/
char *_strstr(char *haystack, char *needle)
{
if (*needle == '\0')
{
return (haystack);
}
while (*haystack != '\0')
{
char *start = haystack;
char *pattern = needle;
while (*pattern != '\0' && *haystack == *pattern)
{
haystack++;
pattern++;
}
if (*pattern == '\0')
{
return (start);
}
haystack = start + 1;
}
return (NULL);
}
