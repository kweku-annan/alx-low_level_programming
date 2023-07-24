#include "main.h"

/**
 * _strspn - Calculates the length of the initial segment of s1
 * which consists entirely of characters from s2
 * @s1: Pointer to the main string
 * @s2: Pointer to the substring containing characters to match
 *
 * Return: Number of bytes in the initial segment of s1 which
 * only contain characters from s2
 */
unsigned int _strspn(char *s1, char *s2)
{
    unsigned int count = 0;
    int i, j;

    for (i = 0; s1[i] != '\0'; i++)
    {
        for (j = 0; s2[j] != '\0'; j++)
        {
            if (s1[i] == s2[j])
            {
                count++;
                break;
            }
        }
        if (s2[j] == '\0')
            break;
    }

    return count;
}
