#include "main.h"
/**
*swap_int - swaps the values of two integers
*@a: An integer input
*@b: An integer input
*Return: Void
**/
void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
