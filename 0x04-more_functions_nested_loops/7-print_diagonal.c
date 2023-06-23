#include "main.h"
/**
*print_diagonal - Draws a straight line in the terminal
*@n: The number of times to print the line
* Return: Nothing
**/
void print_diagonal(int n)
{
int i = 0;
if (n <= 0)
{
_putchar('\n');
return;
}
while (i < n)
{
_putchar("\\");
i++;
}
_putchar('\n');
}
