#include "main.h"
#include <stdio.h>
#include <string.h>
/**
*puts2 - Prints every other character of a string
*@str: Input string
*Return: Void
**/
void puts2(char *str)
{
int i = 0;
while (str[i] != '\0')
{
_putchar(str[i]);
i += 2;
}
_putchar('\n');
}
