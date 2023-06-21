#include "main.h"
#include <unistd.h>
/**
*__putchar- Prints a character to the standard output
*@c: The character to be printed
*
*Return: On success,  returns the charcater printed. On error, returns -1.
*/
int __putchar(char c)
{
write(1, &c, 1);
return (1);
}
/**
*print_alphabet - Entry point of the program.
*Description: - Prints the alphabets
*Return: Nothing
**/
void print_alphabet(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
{
__putchar(c);
}
/*__putchar('\n');*/
}
