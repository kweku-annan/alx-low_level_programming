#include <stdio.h>
/**
*main - Prints all single digit numbers of base 10
*Return: 0
**/
int main(void)
{
int numbers;
for (numbers = 0; numbers <= 9; numbers++)
{
putchar('0' + numbers);
}
putchar('\n');
return (0);
}
