#include "main.h"
#include <stdio.h>
/**
*reverse_array - Reverses the content of an array.
*@a: An input integer
*@n: An input integer
*Return: Void
**/
void reverse_array(int *a, int n)
{
int i, temp;
for (i = 0; i < n / 2; i++)
{
temp = a[i];
a[i] = a[n - 1 - i];
a[n - 1 - i] = temp;
}
}
