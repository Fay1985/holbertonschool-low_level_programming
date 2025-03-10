#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _atoi - function to convert to integer.
 *
 *@s: takes a char argument
 *Return: the int value of char.
 */
int _atoi(char *s)
{
int i = 0;
int sign = 1;
unsigned int result = 0;

while (s[i] != '\0')
{
if (s[i] == '-')
{
sign *= -1;
i++;
}
else if (s[i] >= '0' && s[i] <= '9')
{
break;
}
else
{
i++;
}
}
while (s[i] >= '0' && s[i] <= '9')
{
result = result * 10 + (s[i] - '0');
i++;
}
return (sign *result);
}
