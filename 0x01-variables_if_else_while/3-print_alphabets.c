#include <stdio.h>
/**
*main - Prints the alphabets in lowercase, and in uppercase
*Return: 0
**/
int main(void)
{
char lowerCase;
char upperCase;
for (lowerCase = 'a'; lowerCase <= 'z'; lowerCase++)
{
putchar(lowerCase);
}
for (upperCase = 'A'; upperCase <= 'Z'; upperCase++)
{
putchar(upperCase);
}
putchar('\n');
return (0);
}
