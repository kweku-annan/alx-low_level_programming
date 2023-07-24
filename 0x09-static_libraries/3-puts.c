#include "main.h"
/**
 * _puts - Prints a string to the standard output (stdout)
 * @str: Pointer to the string to be printed
 */
void _puts(char *str)
{
while (*str)
{
_putchar(*str);
str++;
}
}
