#include "main.h"
#include <ctype.h>
#include <unistd.h>
/**
*print_numbers - A function that prints the numbers, from 0 to 9.
*Returns: Nothing or 0
**/
void print_numbers(void)
{
int i;
for (i = 0; i < 10; i++)
{
_putchar(i);
}
_putchar('\n');
}
