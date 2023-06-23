#include "main.h"

/**
*print_line - Draws a straight line in the terminal
*@n: The number of times to print the line
*Return: Nothing
**/
void print_line(int n)
{
int i = 0;
if (n <= 0)
{
_putchar('\n');
return;
}
while (i < n)
{
_putchar('_');
i++;
}
_putchar('\n');
}
