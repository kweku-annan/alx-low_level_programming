#include "search_algos.h"

/**
 *print_array - Prints the elements of an array
 *@arr: The array to print
 *@size: Size of the array
 *@index_0: Starting index to print
 *Return: Nothing
 **/

void print_array(int *arr, size_t index_0, size_t size)
{
	size_t i;

	printf("Searching in array: ");
	for (i = index_0; i <= size - 1; i++)
	{
		printf("%d, ", arr[i]);
	}
	printf("%d\n", arr[i]);
}

/**
 *binary_search - Searches for a value in an array using binary search
 *@array: A pointer to the first element of the array to search in
 *@size: The number of elements in the array
 *@value: The value to search for
 *Return: The index of value in the array
 **/

int binary_search(int *array, size_t size, int value)
{
	size_t midpoint;
	int value_at_midpoint;
	size_t lower_bound = 0;
	size_t upper_bound = size - 1;

	if (array == NULL)
	{
		return (-1);
	}

	while (lower_bound <= upper_bound)
	{
		midpoint = (lower_bound + upper_bound) / 2;
		value_at_midpoint = array[midpoint];
		print_array(array, lower_bound, upper_bound);

		if (value_at_midpoint > value)
		{
			upper_bound = midpoint - 1;
		}
		else if (value_at_midpoint < value)
		{
			lower_bound = midpoint + 1;
		}
		else if (value_at_midpoint == value)
		{
			return ((int)midpoint);
		}
		else
		{
			return (-1);
		}
	}
	return (-1);
}
