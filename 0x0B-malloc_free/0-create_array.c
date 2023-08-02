#include "main.h"
#include <stdlib.h>

/**
 * create_array - Create an array of size 'size' and fill it with char 'c'.
 * @size: Size of the array.
 * @c: Char to assign to each element of the array.
 *
 * Description: Create an array of size 'size' and fill it with char 'c'.
 *
 * Return: Pointer to the created array, or NULL if allocation fails.
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;

	return (str);
}
