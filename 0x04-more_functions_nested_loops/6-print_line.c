#include "main.h"
/**
*print_line - Draws a straight line in the terminal
*@n: Input character
*Return: Nothing
**/
void print_line(int n)
{
int i = 0;
while (i <= n)
{
if (n == 0)
{
_putchar('\n');
return;
}
else
{
_putchar("_");
i++;
}
}
_putchar('\n');
}
