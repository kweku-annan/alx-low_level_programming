#include "main.h"
#include <unistd.h>
#include <ctype.h>
/**
*_islower(int c) Checks if an input is a lowercase letter
*@c: The input character
*Return: 1 if the character is lowercase, 0 if otherwise
**/
int _islower(int c)
{
if (islower(c))
{
return (1);
}
else
{
return (0);
}
}
