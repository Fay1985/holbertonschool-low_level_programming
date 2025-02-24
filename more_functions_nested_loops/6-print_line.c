#include "main.h"

/**
 * print_line - it prints a line.
 *
 *@n: it takes an integer.
 *
 *Return
 */

void print_line(int n)
{
int i;

for (i = 1; i <= n; i++)
{
if (i <= 0)
{
_putchar('\n');
}
_putchar('_');
}
_putchar('\n');
}
