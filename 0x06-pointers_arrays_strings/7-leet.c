#include "main.h"
#include <stdio.h>
/**
*leet - Encodes a string into 1337
*@str: Input string
*Return: A character
**/
char *leet(char *str)
{
char *ptr = str;
char leet_chars[] = {'4', '3', '0', '7', '1'};
char original_chars[] = {'a', 'e', 'o', 't', 'l'};
int original_chars_size = sizeof(original_chars) / sizeof(original_chars[0]);
while (*ptr != '\0')
{
int i;
for (i = 0; i < original_chars_size; i++)
{
if (*ptr == original_chars[i] || *ptr == original_chars[i] - 'a' + 'A')
{
*ptr = leet_chars[i];
break;
}
}
ptr++;
}
return (str);
}
