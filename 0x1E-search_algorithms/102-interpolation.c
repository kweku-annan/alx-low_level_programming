#include "search_algos.h"
/**
 *interpolation_search - Uses interpolation_search algo to find a value
 *@array: Given array to search from
 *@size: Size of the given array
 *@value: Value we are search for
 *Return: The index of the value in the array
 **/

int interpolation_search(int *array, size_t size, int value)
{
	size_t pos = 0;
	size_t low = 0, high = size - 1;

	if (array == NULL)
	{
		return (-1);
	}

	while (array[pos] != value && pos <= size - 1)
	{
		pos = low + (((double)(high - low) / (array[high] - array[low]))
					 * (value - array[low]));
		if (pos > size)
		{
			printf("Value checked array[%lu] is out of range\n", pos);
			return (-1);
		}
		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
		{
			return ((int)pos);
		}
		else if (value < array[pos])
		{
			high = pos - 1;
		}
		else if (value > array[pos])
		{
			low = pos + 1;
		}

	}
	return (-1);
}
