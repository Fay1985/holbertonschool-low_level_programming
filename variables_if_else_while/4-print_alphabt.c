#include <stdio.h>

/**
 * main - Entry point
 *
 * main function prints the full lowercase alphabet and
 * uppercase alphabet and a new line.
 *
 * Return: always 0 (success)
 */

int main (void)
{
char c;
for (c = 'a' ; c <= 'z' ; c++)
{
if (c == 'q' || c == 'e')
{
continue;
}
putchar(c);
}
putchar('\n');
return (0);
}
