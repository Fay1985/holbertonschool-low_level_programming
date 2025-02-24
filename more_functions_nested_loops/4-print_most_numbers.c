#include "main.h"

/*
 * print_most_numbers - prints numbers from 0 to 9 except 2 and 4.
 *
 *@: it takes no mandatory parameter.
 *
 *Return: returns the digit values as required.
 */

void print_most_numbers(void)
{
char i;

for (i = '0' ; i <= '9' ; i++)
{
_putchar(i);
if (i == '2' || i == '4')
continue;
}
_putchar(10);
}
