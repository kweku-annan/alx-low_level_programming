#include "main.h"
#include <unistd.h>
#include <ctype.h>
/**
*_isupper - Checks if an input is an Uppercase alphabet
*@c: The input character
*Return 1 if c is uppercase, 0 if otherwise.
**/
int _isupper(int c)
{
if (isupper(c))
{
return (1);
}
else
{
return (0);
}
}
