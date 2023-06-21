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
  return (write(1, &c, 1));
}
/**
*main - Entry point of the program.
*Description: - Prints the alphabets
*Return: Always 0 (success)
**/
int main(void)
{
int i, j;
for (i = 0; i < 10; i++)
{
for (j = 97; j <= 122; j++)
{
__putchar((char)j);
}
__putchar(char(10));
}
return (0);
}
