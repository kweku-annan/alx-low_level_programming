#include <stdlib.h>
#include "main.h"

/**
 *array_range - Creates an array of integers
 *@min: minimum values of the array
 *@max: maximum value of the array
 *Return: A pointer to an array
 **/

int *array_range(int min, int max)
{
	int i;
	int size = max - min + 1;
	int *new_array;
	if (min >= max)
	{
		return (NULL);
	}
	new_array = malloc(size * sizeof(int));
	if (new_array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size - 1; i++)
	{
		new_array[i] = min;
		min++;
	}
	return (new_array);
}
