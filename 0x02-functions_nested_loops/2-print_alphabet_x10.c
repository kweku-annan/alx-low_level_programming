#include "main.h"
#include <unistd.h>
/**
*print_alphabet_x10 - Prints 10 times the alphabet in lowercase.
*Returns Void
**/
void print_alphabet_x10(void)
{
char c;
int i;
for (i = 0; i <= 10; i++}
{
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
write(1, "\n", 1);
}
}
