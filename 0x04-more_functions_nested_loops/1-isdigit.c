#include "main.h"
#include <unistd.h>
#include <ctype.h>
/**
*_isdigit - Checks if an input is a digit or not.
*@c: Input character
*Return: 1 if c is a digit, 0 if otherwise
**/
int _isdigit(int c)
{
if (isdigit(c))
{
return (1);
}
else
{
return (0);
}
}
