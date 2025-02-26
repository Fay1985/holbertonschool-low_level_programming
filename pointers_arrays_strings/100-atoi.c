#include "main.h"
#include <stdlib.h>
#include <string.h>

/* Converts a string to an integer */
int _atoi(char *s)
{
size_t i = 0;
int sign = 1;
unsigned int result = 0;

while (s[i] == ' ')
{
i++;
}

if (s[i] == '-' || s[i] == '+')
{
if (s[i] == '-')
{
sign = -1;
}
i++;
}
while (s[i] >= '0' && s[i] <= '9')
{
result = result * 10 + (s[i] - '0');
i++;
}
return (sign *result);
}
