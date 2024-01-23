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
	int i, str_len = 0;

	while (str[str_len] != '\0')
	{
		str_len++;
	}
	for (i = 0; i <= str_len; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
