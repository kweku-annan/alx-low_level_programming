#include "main.h"
#include <unistd.h>
/**
*print_most_numbers - Prints the numbers, from 0 to 9, without 2 and 4
*Return: Nothing
**/
void print_most_numbers(void)
{
int i;
for (i = 0; i < 10; i++)
{
if (i != 4 && i != 2)
{
_putchar(i);
}
}
_putchar('\n');
}
