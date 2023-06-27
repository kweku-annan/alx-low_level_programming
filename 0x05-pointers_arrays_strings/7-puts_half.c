#include "main.h"
#include <string.h>
#include <stdio.h>
/**
*puts_half - A function that prints half of a string
*@str: Input string
*Return: Void
**/
void puts_half(char *str)
{
int length = strlen(str);
int start_index;
if (length % 2 == 0)
{
start_index = length / 2;
}
else
{
start_index = (length - 1) / 2;
}
while (str[start_index] != '\0')
{
_putchar(str[start_index]);
start_index++;
}
_putchar('\n');
}
