#include "main.h"
#include <stdio.h>
/*
 *print_diagonal - fnction prints diagonally
 *
 *@n: takes an integer
 *
 *Return: returns adiagonal line.
 */

void print_diagonal(int n)
{
int j;
int i;

for (i = 0; i < n; i++)
{
for (j = 0; j < i; j++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
if (n <= 0)
_putchar('\n');
}
