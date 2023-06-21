#include "main.h"
#include <ctype.h>
#include <unistd.h>
/**
*_isalpha - Checks if an input is an alphabetic character
*@c: The input character
*Return: 1 if the character is alphabetic, 0 if otherwise
**/
int _isalpha(int c)
{
if (isalpha(c))
{
return (1);
}
else
{
return (0);
}
