#include "main.h"
/**
 *_abs - function gives absolute value of an integer
 *@a: The parameter is an integer
 *Return: returns the absolute value
 */
int _abs(int a)
{
if (a < 0)
{
return (a * -1);
}
else if (a > 0)
{
return (a);
}
else
{
return (0);
}
}
