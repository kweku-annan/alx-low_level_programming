#include "main.h"

/**
 * set_bit - Sets a bit at a specified index to 1.
 * @num_ptr: Pointer to the number to modify.
 * @index: The index of the bit to set to 1.
 *
 * Return: 1 for success, -1 for failure (index out of range).
 */
int set_bit(unsigned long int *num_ptr, unsigned int index)
{
	if (index > 63)
		return (-1);

	*num_ptr |= (1UL << index);
	return (1);
}
