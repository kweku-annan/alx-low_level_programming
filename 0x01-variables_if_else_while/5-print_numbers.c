#include <stdio.h>
/**
*main - Prints all single digits numbers of base 10
*Return: 0
**/
int main(void)
{
int numbers;
for (numbers = 0; numbers < 10; numbers++)
{
putchar('0' + numbers);
}
putchar('\n');
return (0);
}
