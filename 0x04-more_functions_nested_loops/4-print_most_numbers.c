#include "main.h"
#include <ctype>
#include <unistd.h>
/**
*print_most_numbers - A function that prints 10 times the numbers, from 0 to 14
*Returns: Nothing.
**/
void print_most_numbers(void)
{
int i, j;
for (i = 0; i < 10; i++)
{
for (j = 0; j < 15; j++)
{
_putchar(j);
}
_putchar('\n');
}
}
