#include "main.h"
/**
*_strlen - Returns the length of a string
*@s: Input character
*Return: Always an integer (length)
**/
int _strlen(char *s)
{
int length = 0;
while (*s != '\0')
{
length++;
s++;
}
return (length);
}
