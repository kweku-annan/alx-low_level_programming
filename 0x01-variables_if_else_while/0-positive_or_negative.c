#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*more headers goes here*/
/*betty style doc for function main goes here*/
/**
*main - Entry point
*Description: prints number and states whether number is negative or positve or 0
*Return: 0
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/*Your code goes there*/
if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n < 0)
{
printf("%d is negative\n", n);
}
else
{
printf("%d is zero\n", n);
}
return (0);
}
