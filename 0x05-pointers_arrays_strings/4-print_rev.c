#include <string.h>
#include <stdio.h>
#include "main.h"
/**
*print_rev - Prints a string in reverse
*@s: Input string
*Return: void
**/
void print_rev(char *s)
{
int length = strlen(s);
int i;
for (i = length - 1; i >= 0; i--)
{
_putchar(s[i]);
}
}
