#include "main.h"
#include <stdio.h>
/**
*is_prime_number - Checks if an input integer is prime number
*@n: Input integer
*Return: Integer
**/
int is_prime_number(int n)
{
int i;
if (n <= 1)
{
return (0);
}
for (i = 2; i * i <= n; i++)
{
if (n % i == 0)
{
return (0);
}
}
return (1);
}
