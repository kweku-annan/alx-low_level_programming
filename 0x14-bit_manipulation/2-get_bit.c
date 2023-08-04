#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index in a decimal number.
 * @num: The number to search for the bit.
 * @index: The index of the bit to retrieve.
 *
 * Return: The value of the bit at the specified index.
 */
int get_bit(unsigned long int num, unsigned int index)
{
	int bit_value;

	if (index > 63)
		return (-1);

	bit_value = (num >> index) & 1;

	return (bit_value);
}
