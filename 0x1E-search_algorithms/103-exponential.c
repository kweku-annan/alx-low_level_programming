#include "search_algos.h"
/**
 *min - Compares two integers and returns the minimum number
 *@a: First integer
 *@b: Second integer
 *Return: The minimum number of a and b
 **/

int min(int a, int b)
{
	return ((a < b) ? a : b);
}

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
 *binary_algo - Implements the Binary Search Algorithm to search for a value
 *@array: Array to work with
 *@left: Lower bound of the array
 *@right: Upper bound of the array
 *@value: The value we are searching for
 *Return: Returns the index of the array
 **/

int binary_algo(int *array, size_t left, size_t right, int value)
{
	int mid;

	while (left <= right)
	{
		mid = (left + right) / 2;
		print_array(array, left, right);
		if (array[mid] > value)
		{
			right = mid - 1;
		}
		else if (array[mid] < value)
		{
			left = mid + 1;
		}
		else if (array[mid] == value)
		{
			return (mid);
		}
		else
		{
			return (-1);
		}
	}
	return (-1);
}


/**
 *exponential_search - Uses Exponential Search algo to find value in array
 *@array: Array to search for value from
 *@size: The size of the array
 *@value: Value to search for
 *Return: Returns the index of value in array
 **/

int exponential_search(int *array, size_t size, int value)
{
	int bound = 0;
	int right, new_bound;

	if (array == NULL)
	{
		return (-1);
	}

	if (array[bound] == value)
	{
		return (bound);
	}

	bound = 1;

	while (bound <= (int)size && array[bound] < value)
	{
		printf("Value checked array[%d] = [%d]\n", bound, array[bound]);
		bound = bound * 2;
		if (array[bound] > value)
		{
			bound = bound / 2;
			right = min(bound * 2, (size - 1));
			printf("Value found between indexes [%d] and [%d]\n", bound, right);
			new_bound = binary_algo(
				array, (size_t)bound, (size_t)right, value
				);
			return (new_bound);
		}
	}
	return (bound);
}
