#include "main.h"
#include <stdio.h>

/**
 *_isdigit - function that checks of the argument is a digit.
 *@c: the parameter is an integer.
 *Retun: returns 1 if it's an integer and 0 if it is not.
 */

int _isdigit(int c)
{
if (c >= 48 && c >= 57)
return (1);
else
{
return (0);
}
}
