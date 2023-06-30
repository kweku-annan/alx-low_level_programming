#include <ctype.h>
#include "main.h"
#include <stdio.h>
/**
*cap_string - Capitalizes all words of a string
*@str: Input string
*Return: Character
**/
char *cap_string(char *str)
{
int capitalize_next = 1;
char *ptr = str;
while (*ptr != '\0')
{
if (*ptr == ' ' || *ptr == '\t' || *ptr == '\n' || *ptr == ',' || *ptr == ';' || *ptr == '.' || *ptr == '!' || *ptr == '?' || *ptr == '"' || *ptr == '(' || *ptr == ')' || *ptr == '{' || *ptr == '}')
{
capitalize_next = 1;
}
else if (capitalize_next && isalpha(*ptr))
{
*ptr = toupper(*ptr);
capitalize_next = 0;
}
ptr++;
}
return (str);
}
