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
	int str_len = 0, n = 0, i;

	while (str[str_len] != '\0')
	{
		str_len++;
	}
	if (str_len % 2 == 0)
	{
		n = str_len / 2;
	}
	else
	{
		n = (str_len - 1) / 2;
	}

	for (i = n; i < str_len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
