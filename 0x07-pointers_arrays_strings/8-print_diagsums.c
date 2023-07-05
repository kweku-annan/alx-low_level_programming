#include "main.h"
#include <stdio.h>
/**
*print_diagsums - Prints the sum of the two diagonals of a square
*@a: An input integer
*@size: An input integer
*Return: Void
**/
void print_diagsums(int *a, int size)
{
int sum1 = 0;
int sum2 = 0;
int i;
int index1, index2;
for (i = 0; i < size; i++)
{
index1 = i * size + i;
index2 = i * size + (size - 1 - i);
sum1 += a[index1];
sum2 += a[index2];
}
printf("%d, %d\n", sum1, sum2);
}
