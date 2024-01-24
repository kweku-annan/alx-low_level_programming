#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*more headers goes here*/
/*betty style doc for function main goes here*/
/**
*main - Entry point
*Description: number and states whether number is negative or positve or 0
*Return: 0
*/
void positive_or_negative(int i)
{
if (i > 0)
{
printf("%d is positive\n", i);
}
else if (i < 0)
{
printf("%d is negative\n", i);
}
else
{
printf("%d is zero\n", i);
}
}
