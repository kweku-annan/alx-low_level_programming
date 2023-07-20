#include "3-calc.h"
#include <stdlib.h>
/**
*get_op_func - Selects the function to perform
*@s: the operator passed as an argument
*Return: A pointer
**/
int (*get_op_func(char *s))(int, int)
{
  op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"/", op_div},
		{"%", op_mod},
		{"*", op_mul},
		{NULL, NULL},
  };
  int i = 0;
  while (ops[i].op != NULL && *(ops[i].op) != *s)
    {
      i++;
    }
    return (ops[i].f);
}
  
