#include <unistd.h>
#include "main.h"
/**
*___putchar - Prints a character to the standard output
* @c: The character to be printed
* Return: On success, returns the character printed. On error, returns -1.
**/
int __putchar(char c)
{
return (write(1, &c, 1));
}
/**
*main - Entry point of the program.
*
*Return: Always 0 (success)
**/
int main(void)
{
char message[] = "_putchar\n";
int i;
for (i = 0; message[i] != '\0'; i++)
{
__putchar(message[i]);
}
return (0);
}
