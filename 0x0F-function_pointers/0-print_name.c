#include "function_pointers.h"
#include <stdio.h>
/**
*print_name - Prints a name
*@name: A string to add
*@f: A pointer to the function
*Return: Nothing
**/
void print_name(char *name, void(*f)(char *))
{
if (name == NULL || f == NULL)
{
return;
}
f(name);
}
