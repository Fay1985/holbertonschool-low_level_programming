#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to convert.
 * Return: The converted integer.
 */
int _atoi(char *s)
{
    int i = 0;
    int sign = 1;
    unsigned int result = 0;
    if (s[i] == '-' || s[i] == '+')
    {
        if (s[i] == '-')
            sign = -1;
        i++;
    }
    while (s[i] >= '0' && s[i] <= '9')
    {
        result = result * 10 + (s[i] - '0');
        i++;
    }
    return (sign * result);
}
