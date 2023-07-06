#include "main.h"
#include <stdio.h>
/**
*_pow_recursion - Returns the value of x raised to the power of y
*@x: Main int
*@y: Power of the main int
*Return: An integer
**/
#include <stdio.h>

int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
if (y == 0)
{
return (1);
}
return (x * _pow_recursion(x, y - 1));
}
