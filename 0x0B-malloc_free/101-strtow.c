#include "main.h"
/**
 *strtow - A function that splits a string into words.
 *str: String to split
 *Return: A pointer to an array of strings (words)
 **/
char **strtow(char *str)
{
	if (str == NULL || str == "")
	{
		return (NULL);
	}
	
