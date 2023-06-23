#include <unistd.h>
#include "main.h"
/**
*_putchar - Prints a character to the standard output
*@c: The character to be printed
*Return: On success, returns the character printed. On error, returns -1.
**/
int _putchar(char c)
{
return (write(1, &c, 1));
}
