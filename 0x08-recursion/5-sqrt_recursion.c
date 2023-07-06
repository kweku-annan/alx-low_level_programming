#include "main.h"
#include <stdio.h>
/**
*_sqrt_recursion - Calculates the natural square root of a number
*@n: Input integer
*Return: An Integer
**/
int _sqrt_recursion(int n)
{
int start;
int end;
int result;
int mid;
int square;
if (n < 0)
{
return (-1);
}
if (n == 0 || n == 1)
{
return (n);
}
start = 1;
end = n / 2;
result = -1;
while (start <= end)
{
mid = (start + end) / 2;
square = (mid * mid);
if (square == n)
{
return (mid);
}
else if (square < n)
{
start = mid + 1;
result = mid;
}
else
{
end = mid - 1;
}
}
return (result);
}
