#include "3-calc.h"
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_mod(int a, int b);
int op_div(int a, int b);
/**
*op_add - Returns the sum of two numbers
*@a: The first input
*@b: The second input
*Return: The sum of a and b
**/
int _op_add(int a, int b)
{
return (a + b);
}
/**
*op_sub - Returns the difference between two numbers
*@a: The first number
*@b: The second number
*Return: The difference of a and b
**/
int op_sub(int a, int b)
{
return (a - b);
}
/**
*op_div - Divides two inputs
*@a: first inputs
*@b: second inputs
*Return: The product of two numbers divided
**/
int op_div(int a, int b)
{
return (a / b);
}
/**
*op_mul - Multiplies two numbers
*@a: First number
*@b: Second number
*Return: The product of two numbers
**/
int op_mul(int a, int b)
{
return(a * b);
}
/**
*op_mod - Returns reminder of two numbers
*@a: first number
*@b: Second number
*Return: the reminder of two numbers
**/
int op_mod(int a, int b)
{
return(a % b);
}
