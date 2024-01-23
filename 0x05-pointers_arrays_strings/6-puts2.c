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
	int str_len = 0;

	while (str[str_len] != '\0')
	{
		if (str_len % 2 == 0)
		{
			_putchar(str[str_len]);
		}
		str_len++;
	}
	_putchar('\n');
}
