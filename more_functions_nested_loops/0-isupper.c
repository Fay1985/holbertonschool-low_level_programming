#include "main.h"
#include <stdio.h>
/**
 *_isupper - function to tell if a letter is uppercase
 *
 *@c: a char parameter
 *
 *Return: value 1 for upper, and 0 otherwise
 */

int _isupper(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}
else
{
return (0);
}
printf("\n");
}
