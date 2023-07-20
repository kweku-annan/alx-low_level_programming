#include "function_pointers.h"
#include <stdio.h>
/**
*array_iterator - Executes a function given as a parameter
*@array: An input array
*@size: How many elements to execute
*@action: Pointer to print in regular
*Return: void
**/
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;
if (array == NULL || action == NULL)
{
return;
}
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
