#include <unistd.h>
#include "main.h"
/**
*___putchar: Entry point
* Description: Prints characters
* Return: give characters
**/
/**
*main: Entry point
*Description: Uses ___putchar to print characters
*Return: 0
**/
int __putchar(char c)
{
return (write(1, &c, 1));
}
int main(void)
{
char message[] = "_putchar\n";
int i;
for (i=0; message[i] != '\0'; i++)
{
__putchar(message[i]);
}
return (0);
}
