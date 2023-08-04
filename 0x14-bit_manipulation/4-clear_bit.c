#include "main.h"

/**
 * clear_bit - Sets the value of a specified bit to 0.
 * @num_ptr: Pointer to the number to modify.
 * @index: The index of the bit to clear.
 *
 * Return: 1 for success, -1 for failure (index out of range).
 */
int clear_bit(unsigned long int *num_ptr, unsigned int index)
{
	if (index > 63)
		return (-1);

	*num_ptr &= ~(1UL << index);
	return (1);
}
