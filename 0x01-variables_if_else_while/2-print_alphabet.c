#include <stdio.h>
/**
*main - Prints the alphabets in lowercase, followed by a newline
*Return: Void
**/
int main(void)
{
char lowercaseAlphabet;
for (lowercaseAlphabet = 'a'; lowercaseAlphabet <= 'z'; lowercaseAlphabet++)
{
putchar(lowercaseAlphabet);
}
putchar('\n');
return (0);
}
