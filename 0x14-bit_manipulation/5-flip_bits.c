#include "main.h"

/**
 * flip_bits - Counts the number of bits to change between two numbers.
 * @num1: The first number.
 * @num2: The second number.
 *
 * Return: The number of bits to change to get from num1 to num2.
 */
unsigned int flip_bits(unsigned long int num1, unsigned long int num2)
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int exclusive = num1 ^ num2;

	for (i = 63; i >= 0; i--)
	{
		current = exclusive >> i;
		if (current & 1)
			count++;
	}

	return (count);
}
