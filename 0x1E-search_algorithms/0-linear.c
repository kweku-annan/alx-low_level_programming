#include "search_algos.h"

/**
 *linear_search - Searches for a value in an array of integers
 *@array: Pointer to the first element of the array
 *@size: The number of elements in the array
 *@value: The value to search for
 *Return: The index of the value in the array
 **/

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (array[i] == value)
		{
			printf("Value checked array[%lu] = [%d]\n", i, array[i]);
			return (i);
		}
		else
		{
			printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		}
	}
	return (-1);
}
