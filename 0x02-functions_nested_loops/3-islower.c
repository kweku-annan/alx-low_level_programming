#include "main.h"
#include <unistd.h>
#include <ctype.h>
/**
*_islower(int c) Checks if an input is a lowercase letter
*Return 1 if true and 0 if false
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
