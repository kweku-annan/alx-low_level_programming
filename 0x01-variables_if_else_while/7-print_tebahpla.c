#include <stdio.h>
/**
*main - Prints lowercase alphabet in reverse
*Return: 0
**/
int main(void)
{
char lowerCase;
for (lowerCase = 'z'; lowerCase >= 'a'; lowerCase--)
{
putchar(lowerCase);
}
putchar('\n');
return (0);
}
