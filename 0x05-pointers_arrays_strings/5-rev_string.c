#include "main.h"
#include <stdio.h>
#include <string.h>
/**
*rev_string - Reverses a string
*@s: input string
*Return: Void
**/
void rev_string(char *s)
{
int i, j;
int length = strlen(s);
char temp;
for (i = 0, j = length - 1; i < j; i++, j--)
{
temp = s[i];
s[i] = s[j];
s[j] = temp;
}
}
