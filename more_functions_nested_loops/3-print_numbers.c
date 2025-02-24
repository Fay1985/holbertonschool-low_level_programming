#include "main.h"

/**
 * print_numbers - function that prints numbers from 0 to 9.
 *
 *@: it takes no mandatory parameter.
 *
 *Return: it has void return (nothing), only outputs to console.
 *
 */

void print_numbers(void)
{
int i;

for (i = '0' ; i <= '9'; i++)
{
_putchar(i);
}
_putchar(10);
}
