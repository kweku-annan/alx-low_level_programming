#include "search_algos.h"
/**
 *jump_search - Search for value using Jump Search algo in array
 *@array: Array to search from
 *@size: Size of the array
 *@value: Value to search for
 *Return: Index of value in the array
 **/

int jump_search(int *array, size_t size, int value)
{
	int lower_bound = 0, jump = (int)sqrt(size), upper_bound = jump;
	int lower_value, upper_value, i;

	if (array == NULL)
	{
		return (-1);
	}
	while (lower_bound <= (int)size)
	{
		lower_value = array[lower_bound];
		upper_value = array[upper_bound];
		printf("Value checked array[%d] = [%d]\n",
			   lower_bound, lower_value);
		if (upper_bound >= (int)size || upper_value >= value)
		{
			printf("Value found between indexes [%d] and [%d]\n",
				   lower_bound, upper_bound);
			for (i = lower_bound; i <= upper_bound && i < (int)size; i++)
			{
				printf("Value checked array[%d] = [%d]\n", i, array[i]);
				if (array[i] == value)
				{
					return (i);
				}
			}
			return (-1);
		}
		lower_bound = upper_bound;
		upper_bound = upper_bound + jump;
	}
	return (-1);
}
