#include "main.h"
/**
 *print_sign - a function that prints signs
 *@n: it takes an integer
 *
 *Return: 1 for positive
 */

int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
if (n < 0)
{
_putchar('-');
return (-1);
}
else
{
_putchar('0');
return (0);
}
}
